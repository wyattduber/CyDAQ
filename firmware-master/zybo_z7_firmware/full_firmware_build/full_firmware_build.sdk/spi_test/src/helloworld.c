/***************************** Include Files *********************************/
#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "xparameters.h"	/* XPAR parameters */
#include "xspi.h"
#include "sleep.h"
#include "xuartps.h"
#include <math.h>
/************************** Constant Definitions *****************************/


/*
 * The following constants map to the XPAR parameters created in the
 * xparameters.h file. They are defined here such that a user can easily
 * change all the needed parameters in one place.
 */
#define SPI_DEVICE_ID		XPAR_AXI_QUAD_SPI_0_DEVICE_ID

#define NSAMPLES	5000

/*
 *  This is the size of the buffer to be transmitted/received in this example.
 */
#define BUFFER_SIZE		2 //17


/**************************** Type Definitions *******************************/

/*
 * The following data type is used to send and receive data on the SPI
 * interface.
 */
typedef u8 DataBuffer[BUFFER_SIZE];


/***************** Macros (Inline Functions) Definitions *********************/


/************************** Function Prototypes ******************************/

int SpiPolledExample(XSpi *SpiInstancePtr, u16 SpiDeviceId);

/************************** Variable Definitions *****************************/

/*
 * The instances to support the device drivers are global such that the
 * are initialized to zero each time the program runs.
 */
static XSpi  SpiInstance;	 /* The instance of the SPI device */

/*
 * The following variables are used to read and write to the  Spi device, they
 * are global to avoid having large buffers on the stack.
 */
u8 ReadBuffer[BUFFER_SIZE];
u8 WriteBuffer[BUFFER_SIZE];

u16 SampleIndex = 0;
s16 SampleBuffer[NSAMPLES];

u8 MSBBuffer[NSAMPLES];
u8 LSBBuffer[NSAMPLES];


int main(void)
{
	init_platform();
	int Status;

	/*
	 * Run the Spi Polled example.
	 */
	Status = SpiPolledExample(&SpiInstance, SPI_DEVICE_ID);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	//return XST_SUCCESS;
	cleanup_platform();
	return 0;
}

/*****************************************************************************/
/**

*
******************************************************************************/
int SpiPolledExample(XSpi *SpiInstancePtr, u16 SpiDeviceId)
{
	init_platform();
	int Status;
	//u32 Count;
	XSpi_Config *ConfigPtr;	/* Pointer to Configuration data */

	/*
	 * Initialize the SPI driver so that it is  ready to use.
	 */
	ConfigPtr = XSpi_LookupConfig(SpiDeviceId);
	if (ConfigPtr == NULL) {
		return XST_DEVICE_NOT_FOUND;
	}

	Status = XSpi_CfgInitialize(SpiInstancePtr, ConfigPtr,
				  ConfigPtr->BaseAddress);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	Status = XSpi_SetOptions(SpiInstancePtr, XSP_MASTER_OPTION | XSP_CLK_PHASE_1_OPTION /* | XSP_MANUAL_SSELECT_OPTION*/);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	XSpi_Start(SpiInstancePtr);
	/*
	 * Disable Global interrupt to use polled mode operation
	 */
	XSpi_IntrGlobalDisable(SpiInstancePtr);
	//xil_printf("%d\r\n",XSpi_GetStatusReg(SpiInstancePtr));


//	u8  WriteBuffer[BUFFER_SIZE]={0xB3,0x03,0x1F,0x00,0x00,0x00,0xC0,0x53,0xA1,0x13,0x00,0x0A,0xCC,0xCC,0x31,0x8E,0x00};
	u8  WriteBuffer[BUFFER_SIZE]={0x00,0x00};
//	u8 WriteBuffer[BUFFER_SIZE]={0x80, 0x0F, 0xF0};

//	u8  ReadBuffer[BUFFER_SIZE]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
	u8 ReadBuffer[BUFFER_SIZE]={0x00,0x00};

	XSpi_SetSlaveSelect(SpiInstancePtr, 0x02);

	//while(1) {
	//	XSpi_Transfer(SpiInstancePtr, WriteBuffer, ReadBuffer, BUFFER_SIZE);
	//}

	/*
	 * Transmit the data.
	 */
	while(SampleIndex < NSAMPLES)
	{
		/*for(u16 i = 0; i < 0xFFFF; i++) {
			WriteBuffer[1] = ((i >> 8) & 0xFF);
			WriteBuffer[2] = (i & 0xFF);
			XSpi_Transfer(SpiInstancePtr, WriteBuffer, NULL, BUFFER_SIZE);
			usleep(100);
		}*/

		//XSpi_SetSlaveSelect(SpiInstancePtr, 0x02);
		XSpi_Transfer(SpiInstancePtr, WriteBuffer, ReadBuffer, BUFFER_SIZE);
		//XSpi_SetSlaveSelect(SpiInstancePtr, 0x00);

		//External SPI ADC returns 12-bit signed sample value (-2048 to 2047) with some 0's for padding
		//Raw byte format: Buf[0] = MSB = 0xxx xxxx, Buf[1] = LSB = xxxx x000

		//Strip padding 0's and combine partial bytes into 12-bit value stored in a 16-bit variable
		//Value is stored in the upper 12 bits of the 16-bit variable (in the form: xxxx xxxx xxxx 0000)
		SampleBuffer[SampleIndex] = 0 | ((ReadBuffer[0] & 0x7F) << 9) | ((ReadBuffer[1] & 0xF8) << 1);

		//Shift value into the lower 12 bits of the 16-bit variable (now in the form: ssss xxxx xxxx xxxx)
		//Storing signed 12-bit value in the upper bits forces an arithmetic right shift, preserving sign
		SampleBuffer[SampleIndex] >>= 4;

		MSBBuffer[SampleIndex] = ReadBuffer[0];
		LSBBuffer[SampleIndex] = ReadBuffer[1];
		SampleIndex++;

		usleep(1);
	}

	for(int i = 0; i < SampleIndex; i++)
	{
		xil_printf("%d\r\n", SampleBuffer[i]);
		//xil_printf("%x %x\r\n", MSBBuffer[i], LSBBuffer[i]);
	}

	/*
	 * Compare the data received with the data that was transmitted.
	 */
	/*for (Count = 0; Count < BUFFER_SIZE; Count++) {
		xil_printf("\n read %d",ReadBuffer[Count]);
		xil_printf("\n write %d",WriteBuffer[Count]);
		if (WriteBuffer[Count] != ReadBuffer[Count]) {
			print("fail");
			return XST_FAILURE;
		}
	}*/
	return XST_SUCCESS;
}

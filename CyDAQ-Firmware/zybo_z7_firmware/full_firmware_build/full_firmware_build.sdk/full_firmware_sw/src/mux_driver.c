#include "mux_driver.h"

//holds GPIO object used in XGPIO library
static XGpio GPIO_MUX;
//saves state of mux class (if init has been called)
static u8 muxInitStatus = 0;
//global that contains currently selected filter
extern filters_e activeFilter;
//static const MUX_SELECT_TYPE inputMuxPins[] = {0x8, 0x4, 0x2}; //Input select lines S0-S3 on JE header.
//static const MUX_SELECT_TYPE filterMuxPins[] = {0x80, 0x40, 0x20};
/*
 * S0 through S3: JE10,JE9,JE8 Reference Zybo PMOD pinout to see numbering (filter muxes).
 * S0 through S3: JE4, JE3, JE2 (Input select mux).
 * High/Low Toggle Pin should be 0 for high pass, 1 for low pass.
 * The values in the arrays represent the bit position of the pin's relative to their position within the je bus (input to GPIO block in design).
 * See constaints file for GPIO routing to external pins.
 */

//holds output mux configuration settings for each filter. Indexed by filters enum in shared_definitions.h\
//the offsets are to align the bits with the select line place within the GPIO bus/pin numbering on the PMOD.
//Ex. filter selects are pins 8,9,10 on the PMOD, mapped to bits 5,6,7 into the axi_gpio. Therefore, the offset is 5.
//
//Select Line bits are 0bS2S1S0
static mux_config_data_t outputConfigs[NUM_FILTERS] = {
		{1, 0b010, 0}, //1ST ORDER LP
		{0, 0b011, 0}, //1ST ORDER HP
		{1, 0b101, 0}, //2ND ORDER BP
		{1, 0b100, 0}, //6TH ORDER BP
		{0, 0b110, 0}, //6TH ORDER HP
		{1, 0b110, 0}, //6TH ORDER LP
		{1, 0b001, 0}, //60HZ NOTCH
		{0, 0b000, 0}, //PASSTHROUGH
};
//holds input mux configuration settings for each input. Indexed by inputs_e in shared_definitions.h
//Select Line bits are 0bS2S1S0
static mux_config_data_t inputConfigs[NUM_INPUTS] = {
		{0, 0b100, 0}, //AUXILARY35MM
		{0, 0b011, 0}, //ANALOG
		{0, 0b000, 0}, //SENSOR1V8
		{0, 0b001, 0}, //SENSOR3V3
		{0, 0b010, 0}, //SENSOR5V0
};

/**
 * Initializes GPIO module for controlling the input and output muxes/demuxes.
 */
int muxInit(){
	int status = 0;
	XGpio_Config *Config;
	//initializes XGPIO pointer
	Config = XGpio_LookupConfig(GPIO_DEV_ID);
	status = XGpio_CfgInitialize(&GPIO_MUX, Config, Config->BaseAddress);
	if(status != XST_SUCCESS && DEBUG){
		xil_printf("Error setting up GPIO for Mux Pins\n");
	}
	//mask used to get output direction of gpio bus
//	u8 outputMask =~HL_TOGGLE_PIN & ~ENABLE_PIN;
//	for(i = 0; i < NUM_SELECT_PINS; i++){
//		//bit mask of 0 is output direction
//		outputMask &= ~filterMuxPins[i];
//	}

	//set gpio pins to be all outputs (assuming mux pins are the only ones on this channel)
	XGpio_SetDataDirection(&GPIO_MUX, MUX_GPIO_CHANNEL, 0x00);

	muxInitStatus = 1;

	//set pins to default state
	muxSetActiveFilter(FILTER_PASSTHROUGH);
	muxSetInputPins(ANALOG);

	return status;
}

/**
 * Sets active filter to connect to output.
 */
u8 muxSetActiveFilter( filters_e filterSelect){

	//checks if gpio module has been initialized
	if(muxInitStatus == 0){
		muxInit();
	}
	//checks if input is valid
	if(filterSelect >= NUM_FILTERS){
		if(DEBUG)
			xil_printf("Error, %d is not a valid filter enum #\n", filterSelect);
		return MUX_SET_FAILED;
	}else if(DEBUG){
		xil_printf("Changing filter to %d\n", filterSelect);
	}
	//gets mux configuration from input array using input number
	mux_config_data_t *config = &outputConfigs[filterSelect];
	//creates mask based on config values. Preserves input pins.
	u8 mask =  ((u8) XGpio_DiscreteRead(&GPIO_MUX, MUX_GPIO_CHANNEL) & (0x0E)) | ((config->muxSelectPins << FLTR_PIN_OFFSET)
				| (config->enablePin << EN_PIN_OFFSET) | (config->hlToggle << HL_TGLE_PIN_OFFSET));
	//writes mask to GPIO channel
	XGpio_DiscreteWrite(&GPIO_MUX, MUX_GPIO_CHANNEL, mask);
	activeFilter = filterSelect;
	return 0;
}

u8 muxSetInputPins( inputs_e inputSelect){

	//checks if gpio module has been initialized
	if(muxInitStatus == 0){
		muxInit();
	}
	//checks if input is valid
	if(inputSelect >= NUM_INPUTS){
		if(DEBUG)
			xil_printf("input requested %d not in valid range\n", inputSelect);
		return MUX_SET_FAILED;
	}else if(DEBUG){
		xil_printf("Changing input to: %d\n", inputSelect);
	}
	//gets mux configuration from input array using input number
	mux_config_data_t *config = &inputConfigs[inputSelect];
	//creates mask based on config values. Preserves filter and H/L toggle pins.
	u8 mask =  ((u8) XGpio_DiscreteRead(&GPIO_MUX, MUX_GPIO_CHANNEL) & (0xF0)) | ((config->muxSelectPins << INPUT_PIN_OFFSET)
				| (config->enablePin << EN_PIN_OFFSET));
	//writes mask to GPIO channel
	XGpio_DiscreteWrite(&GPIO_MUX, MUX_GPIO_CHANNEL, mask);

	return 0;
}

/*
 * ir_sensor.c
 *
 *  Created on: Nov 20, 2020
 *      Author: irex
 */

#include "ir_sensor.h"

IR *ir_init() {
	IR *ir_sensor = malloc(sizeof(IR));
	gpio_ssel = malloc(sizeof(XGpio));

//	XGpio_Initialize(gpio_ssel, XPAR_AXI_GPIO_1_DEVICE_ID);

	ir_sensor->dist0 = 0;
	ir_sensor->dist1 = 0;
	ir_sensor->s0_coeff[0] = 0;
	ir_sensor->s0_coeff[1] = 1;
	ir_sensor->s1_coeff[0] = 0;
	ir_sensor->s1_coeff[1] = 1;
	ir_sensor->use_s1 = 0;

	// Reset the IIC block
	XIic_WriteReg(XPAR_AXI_IIC_0_BASEADDR, XIIC_RESETR_OFFSET,
			XIIC_RESET_MASK);


	return ir_sensor;
}

void setAccum(IR *ir_sensor, int num) {
	u8 send[2] = {IR_SIG_ACCUM_REG, num};
	XIic_Send(XPAR_AXI_IIC_0_BASEADDR, IR_ADDR, send, 2, XIIC_STOP);
}

int getAccum(IR *ir_sensor) {
	u8 accum_reg = IR_SIG_ACCUM_REG;
	u8 ret;
	XIic_Send(XPAR_AXI_IIC_0_BASEADDR, IR_ADDR, &accum_reg, 1, XIIC_STOP);
	XIic_Recv(XPAR_AXI_IIC_0_BASEADDR, IR_ADDR, &ret, 1, XIIC_STOP);

	return ret;
}

float getDist(IR *ir_sensor) {
	u8 ir_reg_d1 = IR_D1_REG;
	u8 ir_reg_n = IR_D3_REG;
	u8 ir_d[2];
	u8 ir_n;
	u32 dist_raw = 0;
	// Get D values
	XIic_Send(XPAR_AXI_IIC_0_BASEADDR, IR_ADDR, &ir_reg_d1, 1, XIIC_STOP);
	XIic_Recv(XPAR_AXI_IIC_0_BASEADDR, IR_ADDR, ir_d, 2, XIIC_STOP);
	// Get N value
	XIic_Send(XPAR_AXI_IIC_0_BASEADDR, IR_ADDR, &ir_reg_n, 1, XIIC_STOP);
	XIic_Recv(XPAR_AXI_IIC_0_BASEADDR, IR_ADDR, &ir_n, 1, XIIC_STOP);

	dist_raw = ((ir_d[0] << 4) | (ir_d[1] & 0xF)) >> ir_n;
	return (((float) dist_raw) / 16.0 * ir_sensor->s0_coeff[1]
			+ ir_sensor->s0_coeff[0]);
}

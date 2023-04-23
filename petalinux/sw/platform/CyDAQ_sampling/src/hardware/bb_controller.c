/*
 * bb_controller.c
 *
 *  Created on: Nov 22, 2020
 *      Author: irex
 */

#include "bb_controller.h"

#define SERVO_OFFSET_DEG -5
#define SERVO_MIN_PWM_WIDTH_US 500
#define SERVO_MAX_PWM_WIDTH_US 2500
#define SERVO_MAX_ROTATION_DEG 300
#define SERVO_MID_DEG (SERVO_MAX_ROTATION_DEG/2)
#define SERVO_LOW_LIM_DEG (SERVO_MID_DEG - 35)
#define SERVO_HIGH_LIM_DEG (SERVO_MID_DEG + 35)
#define UART_TIMEOUT_US 50e3

#if defined (SLEEP_TIMER_BASEADDR)
#define COUNTS_PER_USECOND (SLEEP_TIMER_FREQUENCY / 1000000)
#else
#define COUNTS_PER_USECOND  (XPAR_CPU_CORTEXA9_CORE_CLOCK_FREQ_HZ / (2U*1000000U))
#endif

#define MAP_COEFF_0 0.40
#define MAP_COEFF_1 0.85

//XUartPs *uart;
int pause = 0;

int ballbeamStart() {
	PID *pid;
	IR *ir_sensor;
	SERVO *servo;

	XTime ticks;
	u64 current_us;
	u64 last_us;
	float kp = 1.2;
	float kd = 0.7;
	float ki = 0.4;
	float theta = SERVO_MID_DEG;
	float r = 15;
	float dist_cm = 0;
	unsigned int dt_us = 10e3;
	int stop = 0;

	// Get UART pointer
//	uart = commGetUartPtr(); //TODO not how bb will work

	// Initialize PID Controller
	pid = pid_init(kp, ki, kd, r);
	pid->i_windup_lim[0] = -1e3;
	pid->i_windup_lim[1] = 1e3;
	pid->N = 5000;

	// Initialize IR Sensor
	ir_sensor = ir_init();
	ir_sensor->s0_coeff[0] = MAP_COEFF_0;
	ir_sensor->s0_coeff[1] = MAP_COEFF_1;
	printf("0x%x\n", getAccum(ir_sensor));
	setAccum(ir_sensor, IR_ACCUM_1);
	printf("0x%x\n", getAccum(ir_sensor));

	// Initialize Servo
	servo = servo_init(SERVO_MIN_PWM_WIDTH_US, SERVO_MAX_PWM_WIDTH_US,
	SERVO_MAX_ROTATION_DEG);
	servo->max_lim = SERVO_HIGH_LIM_DEG;
	servo->min_lim = SERVO_LOW_LIM_DEG;
	servo->offset = SERVO_OFFSET_DEG;

	while (1) {

		stop = parseInput(pid);
		if (stop == 1) {
			break;
		}

		XTime_GetTime(&ticks);
		current_us = ticks / COUNTS_PER_USECOND;
		if (!pause && ((current_us - last_us) > dt_us)) {
			last_us = current_us;
			dist_cm = getDist(ir_sensor);
			updatePID(pid, dist_cm, ((float) dt_us) / 1e6);
			theta = SERVO_MID_DEG + pid->out;
			if (dist_cm > 40) {
				theta = SERVO_MID_DEG;
				pid->integrator = 0;
			}

			servoWrite(servo, theta);

			printf("%.3f\n", dist_cm);
		}

	}
	return 0;

}

int parseInput(PID *pid) {
//	static u8 in_buff[50];
////	int num_bytes = XUartPs_Recv(uart, in_buff, 64);
//	int num_bytes = 0;
//
//	if (num_bytes != 0) {
//		XTime ticks;
//		unsigned int start_us;
//		unsigned int current_us;
//		XTime_GetTime(&ticks);
//		start_us = ticks / COUNTS_PER_USECOND;
//
//		while ((in_buff[num_bytes - 1] != COMM_STOP_CHAR)) {
//			XTime_GetTime(&ticks);
//			current_us = ticks / COUNTS_PER_USECOND;
//			if ((current_us - start_us) > UART_TIMEOUT_US) {
//				return 0;
//			}
////			num_bytes += XUartPs_Recv(uart, &in_buff[num_bytes], 64);
//		}
//
//		in_buff[num_bytes] = 0;
//		char *token;
//
//		token = strtok((char*) in_buff, " \n!");
//		tolower_str(token);
//
//		if (strcmp(token, "kp") == 0) { // Kp
//			token = strtok(NULL, " \n");
//			if (strcmp(token, "?") == 0) {
//				printf("%.5f", pid->kp);
//				return 0;
//			}
//			pid->kp = strtof(token, NULL);
//		} else if (strcmp(token, "kd") == 0) { // Kd
//			token = strtok(NULL, " \n");
//			if (strcmp(token, "?") == 0) {
//				printf("%.5f", pid->kd);
//				return 0;
//			}
//			pid->kd = strtof(token, NULL);
//		} else if (strcmp(token, "ki") == 0) { // Ki
//			token = strtok(NULL, " \n");
//			if (strcmp(token, "?") == 0) {
//				printf("%.5f", pid->ki);
//				return 0;
//			}
//			pid->integrator = 0;
//			pid->ki = strtof(token, NULL);
//		} else if (strcmp(token, "n") == 0) { // N
//			token = strtok(NULL, " \n");
//			if (strcmp(token, "?") == 0) {
//				printf("%.5f", pid->N);
//				return 0;
//			}
//			pid->N = strtof(token, NULL);
//		} else if (strcmp(token, "r") == 0) { // Set
//			token = strtok(NULL, " \n");
//			if (strcmp(token, "?") == 0) {
//				printf("%.5f", pid->set);
//				return 0;
//			}
//			pid->set = strtof(token, NULL);
//		} else if (strcmp(token, "pause") == 0) { // Pause
//			token = strtok(NULL, " \n");
//			if (strcmp(token, "off") == 0) { // resume
//				pause = 0;
//			} else if (strcmp(token, "on") == 0) { // pause
//				pause = 1;
//			}
//			return 0;
//		} else if (strcmp(token, "q") == 0) { // Quit
//			return 1;
//		}
//
//	}
//	return 0;
}

void tolower_str(char *str) {
	for (int i = 0; str[i]; ++str) {
		str[i] = tolower((unsigned char )str[i]);
	}
}

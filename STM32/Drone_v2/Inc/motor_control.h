#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief  MPU6050 result enumeration	
 */
typedef enum _FPGA_Result_t {
	FPGA_Result_Ok = 0x00,          /*!< Everything OK */
	FPGA_Result_Error              /*!< Unknown error */
} FPGA_Result_t;


FPGA_Result_t duty_moteurs(int id_moteur, int duty);
int check_parity(uint8_t val[2]);
void run_moteurs(int id_motor);
void check_motor_vibrations(int id_motor);

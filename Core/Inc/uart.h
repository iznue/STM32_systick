/*
 * uart.h
 *
 *  Created on: Feb 3, 2023
 *      Author: npedu032
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h" //main.h를 포함하지 않으면 library 함수 사용 불가

// header에 prototype 설정
uint8_t getChar();
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void initUart();

#endif /* INC_UART_H_ */

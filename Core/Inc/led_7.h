/*
 * led_7.h
 *
 *  Created on: Sep 16, 2021
 *      Author: DELL
 */

#ifndef INC_LED_7_H_
#define INC_LED_7_H_

uint8_t update_seven_segment_led_buffer(uint8_t val);
void seven_segment_led_driver(void);
void test_seven_segment_led(int counter);
#endif /* INC_LED_7_H_ */

/*
 * software_timer.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Nhat Thien
 */

#include "software_timer.h"

int timerVer_counter = 0;
int timerVer_flag = 0;

int timerHo_counter = 0;
int timerHo_flag = 0;

int timer7SEG_counter = 0;
int timer7SEG_flag = 0;



void setTimerVer(int duration) {
	timerVer_counter = duration/TIMER_CYCLE;
	timerVer_flag = 0;
}
void setTimerHo(int duration) {
	timerHo_counter = duration/TIMER_CYCLE;
	timerHo_flag = 0;
}
void setTimer7SEG(int duration) {
	timer7SEG_counter = duration/TIMER_CYCLE;
	timer7SEG_flag = 0;
}


void timerRun() {
	if (timerVer_counter > 0) {
		timerVer_counter--;
		if (timerVer_counter <= 0) {
			timerVer_flag = 1;
		}
	}
	if (timerHo_counter > 0) {
		timerHo_counter--;
		if (timerHo_counter <= 0) {
			timerHo_flag = 1;
		}
	}
	if (timer7SEG_counter > 0) {
		timer7SEG_counter--;
		if (timer7SEG_counter <= 0) {
			timer7SEG_flag = 1;
		}
	}
}


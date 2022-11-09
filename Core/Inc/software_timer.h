/*
 * software_timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Nhat Thien
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TIMER_CYCLE  10

extern int timerVer_flag;
extern int timerHo_flag;
extern int timer7SEG_flag;




void setTimerVer(int duration);
void setTimerHo(int duration);
void setTimer7SEG(int duration);


void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */

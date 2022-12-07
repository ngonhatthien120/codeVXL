/*
 * schedule.h
 *
 *  Created on: Nov 26, 2022
 *      Author: Nhat Thien
 */

#ifndef INC_SCHEDULE_H_
#define INC_SCHEDULE_H_

#include <stdint.h>

typedef struct{
	void (*pTask)(void);
	uint32_t 	Delay; // like software timer when set counter
	uint32_t 	Period;
	uint8_t 	RunMe; //like timer_flag

	uint32_t 	TaskID;
}sTasks;

#define SCH_MAX_TASKS 40

void SCH_Init(void);

//set timer
void SCH_Add_Task ( void (*pFunction)() ,
					uint32_t DELAY,
					uint32_t PERIOD);
//timer run
void SCH_Update(void);

//check timer flag
void SCH_Dispatch_Tasks(void);

//must have when doing lab 5
void SCH_Delete(uint32_t ID);

#endif /* INC_SCHEDULE_H_ */

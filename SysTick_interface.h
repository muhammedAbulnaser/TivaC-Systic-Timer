
// Author : Muhammed Abdulnaser
// This is a System Tick timer (SysTick timer) driver For Tiva c TM4C123GH6PM .
// Version 1.0.0
// SysTick Works in that library on 16 MHZ clock .

/************************************************************
***************** Public Functions **************************
************************************************************/

void SysTick_Start_No_Interrupt (void);

void SysTick_Start_Interrupt(void);

void SysTick_Stop  (void);

uint32_t SysTickFlags_Counter (void);

void SysTick_ClearCounter (void);

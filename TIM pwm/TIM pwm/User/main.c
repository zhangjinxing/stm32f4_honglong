/****************************************Copyright (c)***************************************
**                                 http://www.openmcu.com
**-------------------------------------------------------------------------------------------
** File name:           main.c
** Last modified Date:  2012-12-28
** Last Version:        V1.00
** Descriptions:        ����407������ LED����
**
**-------------------------------------------------------------------------------------------
** Created by:          FXL
** Last modified Date:  2012-12-28
** Last Version:        V1.00
** Descriptions:        ����407������ tim����
**
**-------------------------------------------------------------------------------------------
** Modified by:         
** Modified date:       
** Version:             
** Descriptions:        
**-------------------------------------------------------------------------------------------
********************************************************************************************/
#include "stm32f4xx.h"
#include "Tim_pwm.h"

int main(void)
{
  TimPwm_Test();
  while (1)
  {
  }
}




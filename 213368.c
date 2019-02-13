/******************************************************************************
* File Name: Wiper C code
* Description:  This file contains functions of Wiper Modes and its operation
* Tool-Chain: AVR gcc
*
*  Modification History:
*  Created by:      SUNDAR.S.P(213368)    V1.0      11/Feb/2019
*  Description:     V1.0
******************************************************************************/

/******************************************************************************
*                      Includes
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/******************************************************************************
*                      Defines and data types
******************************************************************************/

/******************************************************************************
*
******************************************************************************/

/******************************************************************************
*                      Global variables
******************************************************************************/
void Sensor();
void Wiper(int );
/******************************************************************************
*                      Static variables
******************************************************************************/


/******************************************************************************
*                      Public function
******************************************************************************/

/******************************************************************************
* Name: Sensor()
* Description: This function gets the rain intensity value from the sensor and finds the corresponding pwm value of the motor.
******************************************************************************/
void Sensor(){
     uint16_t Rain_intensity;
     uint8_t PWM;
printf("\nEnter the Sensor Reading: ");
scanf("%d",&Rain_intensity);
if(Rain_intensity<100){
    PWM=0;
}else if(Rain_intensity<=250){
PWM=1;
}else if(Rain_intensity<=500){
PWM=2;
}else{
PWM=3;}
Wiper(PWM);
}

/******************************************************************************
* Name: Wiper(int pwm)
* Description: This function gets the pwm of the motor value from the Sensor function and prints the state of the wiper.
******************************************************************************/
void Wiper(int pwm){

switch(pwm){
case 0:
    {
    printf("No Wiper\n\n\n");
    break;}
case 1:
    {
    printf("25 percent of Wiper Speed\n\n\n");
    break;}
case 2:
    {
    printf("50 percent of Wiper Speed\n\n\n");
    break;}
case 3:
    {
    printf("75 percent of Wiper Speed\n\n\n");
    break;}
}
}
/******************************************************************************
*                      Main function
******************************************************************************/
int main()
{
    uint8_t Engine_state;
    uint8_t Wiper_state;
    while(1){
    printf("Enter the Engine State: ");
    scanf("%d",&Engine_state);
    if(Engine_state==1){
     printf("\nEnter the Wiper State: ");
     scanf("%d",&Wiper_state);
     if(Wiper_state==1){
            Sensor();
    }else{
        printf("\n\nWiper is OFF\n\n");
    }
    }else
    {
        printf("\n\nEngine is OFF\n\n ");
    }
    }
return 0;
}
/******************************************************************************
*                      End of File
******************************************************************************/

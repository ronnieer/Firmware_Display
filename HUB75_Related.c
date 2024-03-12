#include <stdio.h>
#include "driver/gpio.h"
#include "general_data_header.h"



char characterBoxLine_1[11][8], characterBoxLine_2[11][8], characterBoxLine_3[11][8], characterBoxLine_4[11][8];

/*
=======================================================================================================================================================================================================
========================  DISPLAY UPPER/ LOWER SET FUNCTION  ==========================================================================================================================================
=======================================================================================================================================================================================================
*/

void textColorSet(DISPLAY_PART U_L){

    bool red, green, blue;
    red = ((colors & 0x01) == 0x01);
    green = ((colors & 0x02) == 0x02);
    blue = ((colors & 0x04) == 0x04);
    
    if(U_L == display_U){
        gpio_set_level(RED_U, red);
        gpio_set_level(GREEN_U, green);
        gpio_set_level(BLUE_U, blue);

        gpio_set_level(RED_L, false);
        gpio_set_level(GREEN_L, false);
        gpio_set_level(BLUE_L, false);
    }
    else if (U_L == display_L){
        gpio_set_level(RED_U, false);
        gpio_set_level(GREEN_U, false);
        gpio_set_level(BLUE_U, false);

        gpio_set_level(RED_L, red);
        gpio_set_level(GREEN_L, green);
        gpio_set_level(BLUE_L, blue);        
    }
}

/*
=======================================================================================================================================================================================================
========================  MANAGE DISPLAY BACKGROUND COLOR  ============================================================================================================================================
=======================================================================================================================================================================================================
*/

void backgroundColorSet(void){
    gpio_set_level(RED_U, 0);
    gpio_set_level(BLUE_U, 0);
    gpio_set_level(GREEN_U, 0);

    gpio_set_level(RED_L, 0);
    gpio_set_level(BLUE_L, 0);
    gpio_set_level(GREEN_L, 0); 
}

/*
=======================================================================================================================================================================================================
========================  MANAGE DISPLAY PIN ROW COUNER  ==============================================================================================================================================
=======================================================================================================================================================================================================
*/

void rowsAtHUB75(uint8_t characterLineIndex)
{
    gpio_set_level(ROW3_PIN, (characterLineIndex & 0x08) >> 3);
    gpio_set_level(ROW2_PIN, (characterLineIndex & 0x04) >> 2);
    gpio_set_level(ROW1_PIN, (characterLineIndex & 0x02) >> 1);
    gpio_set_level(ROW0_PIN, (characterLineIndex & 0x01) >> 0);
}    

/*
=======================================================================================================================================================================================================
========================  MANAGE DISPLAY LOW LEVEL FUNCTIONS  =========================================================================================================================================
=======================================================================================================================================================================================================
*/

void strobe(void){
    gpio_set_level(D_STB, 1); 
    gpio_set_level(D_STB, 0);
}

void clkPulse(void){
    gpio_set_level(D_CLK, 1); 
    gpio_set_level(D_CLK, 0);       
}

void clkPulseX2(void){
    clkPulse();
    clkPulse();
}

/*
=======================================================================================================================================================================================================
========================  DISPLAY BRIGHTNESS TIMER  ===================================================================================================================================================
=======================================================================================================================================================================================================
*/

void displayBrightnesControl(void){
    if(ENATime < 7) ENATime = 7;
    else if(ENATime > 1750) ENATime = 1750;

    float ftENATime = (float)(pow(ENATime, 2) / 1400);
    
    uint32_t number = 0;
    while(number < ftENATime){
        number++;
    }
}
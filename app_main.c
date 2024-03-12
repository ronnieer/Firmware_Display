#include "general_data_header.h"

int timeENA, timeENAReference;

void app_main(void){
    pinInit();
    ADC_LightSensor();

    xTaskCreatePinnedToCore(
        runHub75,               // Function to implement the task
        "runHub75",             // Name of the task
        4096,                   // Stack size in words
        NULL,                   // Task input parameter
        1,                      // Priority of the task
        NULL,                   // Task handle.
        1                       // Core where the task should run
    );  

    xTaskCreatePinnedToCore(
        spiBusReciever,         // Function to implement the task
        "spiBusReciever",       // Name of the task
        4096,                   // Stack size in words
        NULL,                   // Task input parameter
        1,                      // Priority of the task
        NULL,                   // Task handle.
        0                       // Core where the task should run
    ); 
}  

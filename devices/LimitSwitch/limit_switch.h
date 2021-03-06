#ifndef EX_DEVICE_H
#define EX_DEVICE_H

#include "hibike_message.h"
#include "devices.h"
#include <Servo.h>

#define NUM_PARAMS 5

#define NUM_SWITCHES 4
#define IN_0 A0
#define IN_1 A1
#define IN_2 A2
#define IN_3 A3

#define LED_PIN 13

// function prototypes
void setup();
void loop();

// Parameter Update 
void update_param(uint8_t param, uint32_t value);

// functions to control this device
void toggleLED();

#endif /* EX_DEVICE_H */
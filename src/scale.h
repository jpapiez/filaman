#ifndef SCALE_H
#define SCALE_H

#include <Arduino.h>
#include "HX711.h"

uint8_t setAutoTare(bool autoTareValue);
uint8_t start_scale(bool touchSensorConnected);
uint8_t calibrate_scale();
uint8_t tareScale();

extern HX711 scale;
extern int16_t weight;
extern uint8_t weigthCouterToApi;
extern uint8_t scale_tare_counter;
extern uint8_t scaleTareRequest;
extern uint8_t pauseMainTask;
extern uint8_t scaleCalibrated;
extern bool autoTare;

extern TaskHandle_t ScaleTask;

#endif
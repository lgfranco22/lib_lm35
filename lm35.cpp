/*

arquivo cpp

lib para lm35

*/

#include "Arduino.h"
#include "lm35.h"

lm_t::lm_t(int pin)
{

    pinMode(pin, INPUT);
    _pin = pin;

}

float lm_t::t_celsius()
{

    int adc;
    float temp_c;

    adc = analogRead(_pin);

    temp_c = (adc/1023.0)*500.0;

    return temp_c;

}


float lm_t::t_fahrenheit()
{

    int adc;
    float temp_c, temp_f;

    adc = analogRead(_pin);

    temp_c = (adc/1023.0)*500.0;

    temp_f = (temp_c*1.8)+32;

    return temp_f;

}



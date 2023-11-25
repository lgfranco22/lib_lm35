/*

arquivo.h

lib para lm35

*/

#ifndef lm35
#define lm35

#include "Arduino.h"

class lm_t
{

  public:
    lm_t(int pin);
    float t_celsius();
    float t_fahrenheit();

  private:
    int _pin;

};

#endif

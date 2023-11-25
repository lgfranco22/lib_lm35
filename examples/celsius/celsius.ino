/*

  Lib para lm35
  Autor: Luiz G F Michelmann
  Data: 25/11/2023

  Créditos: WR Kits

*/

#include <lm35.h>

lm_t se1(A0);


void setup() {
  Serial.begin(115200);
}

void loop() 
{
  float temperature;

  temperature = se1.t_celsius();

  Serial.print(" Temp = ");
  Serial.println(temperature);

  delay(741);

}

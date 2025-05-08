#include <SPI.h>
#include <Arduino.h>

#include "HardwareArduino.h"
#include "Demonstrator_V1_0.h"
#include "config.hpp"

HardwareArduino hardware_loc;

void setup()
{
  Demo_setup(&hardware_loc);
}

void loop()
{
  Demo_loop();
  delay(1000);
}
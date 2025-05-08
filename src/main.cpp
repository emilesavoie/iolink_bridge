#include <SPI.h>
#include <Arduino.h>

#include "HardwareArduino.h"
#include "Demonstrator_V1_0.h"
#include "config.hpp"

HardwareArduino hardware_loc;

void setup()
{
    pinMode(ESP32::IO_LINK_CS, OUTPUT);
    digitalWrite(ESP32::IO_LINK_CS, HIGH);  // Drive it high (3.3V)
    pinMode(ESP32::IO_LINK_SCLK, OUTPUT);
    pinMode(ESP32::IO_LINK_SDI, OUTPUT);
    pinMode(ESP32::IO_LINK_SDO, INPUT);
    pinMode(ESP32::IO_LINK_IRQ, INPUT_PULLUP);

  Demo_setup(&hardware_loc);
}

void loop()
{
  Demo_loop();
  delay(1000);
}
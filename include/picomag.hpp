#ifndef __PICOMAG_HPP__
#define __PICOMAG_HPP__

#include "IOLGenericDevice.h"
#include "picomag_congif.hpp"

#include "cstdio"
#include "string.h"

class PICOMAG : public IOLGenericDevice
{
public:
    PICOMAG() : IOLGenericDevice(nullptr) {}
    PICOMAG(IOLMasterPort *port_) : IOLGenericDevice(port_) {}

    void begin(void)
    {
        port->begin();
    }

    float getTemp(void)
    {
        uint8_t data[PICOMAG_CONGIF::TEMP::DATA_SIZE];
        float temp = 0.0F;

        port->readDirectParameterPage(PICOMAG_CONGIF::TEMP::ADRESS, nullptr);

        if (port->readPD(data, 4) != ERROR)
        {
            memcpy(&temp, data, sizeof(float));
        }

        return temp;
    }
};

#endif
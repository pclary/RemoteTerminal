#include <WProgram.h>
#include "./Radio.h"
#include <SPI.h>


void setup()
{
    Serial.begin(115200);
    
    Radio::initialize(8, 9, 10);
    Radio::reset();
}


void loop()
{
    for (int i = Serial.available(); i > 0; ++i)
    {
        int c = Serial.read();
        if (c != -1)
            Radio::transmit(uint8_t(c));
    }
}

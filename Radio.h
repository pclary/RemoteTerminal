#ifndef RADIO_H
#define RADIO_H


namespace Radio
{
    void initialize(int csnPin, int cePin, int irqPin);
    void reset();
    void transmit(uint32_t data);
    
    extern uint8_t channel;
    extern uint32_t rxAddress;
    extern uint32_t txAddress;
};

#endif // RADIO_H
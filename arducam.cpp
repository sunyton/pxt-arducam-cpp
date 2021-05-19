#include "pxt.h"


namespace arducam {

    //% blockId=init block="init camera"
    void init() {
        MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
        uint8_t buffer[]={0x2e, 0xdf}; 
        i2c.write(0x30,buffer, 2);
    }
}
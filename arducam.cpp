#include "pxt.h"


//% color="#ff6600" weight=50 icon="\uf110"
namespace arducam {

    /**
    * init 
    */
    //% blockId=arducam_init2 block="init2 camera"
    //% group="ok"
    void init12() {
        MicroBitI2C &i2c = MicroBitI2C(I2C_SDA0, I2C_SCL0);
        // uint8_t buffer[]={0x2e, 0xdf}; 
        // (&uBit.i2c)->writeRegister(0x60, 0x2e, 0xdf);
        i2c.writeRegister(0x60, 0x2e, 0xdf);
    }
}
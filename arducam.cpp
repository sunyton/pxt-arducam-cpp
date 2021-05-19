#include "pxt.h"


//% color="#ff6600" weight=50 icon="\uf110"
namespace arducam {

    /**
    * init 
    */
    //% blockId=arducam_init2 block="init2 camera"
    //% group="ok"
    void init12() {
        // MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
        uint8_t buffer[]={0x2e, 0xdf}; 
        // i2c.write(0x30,buffer, 2);
    }
}
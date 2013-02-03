#include "adcHelper.h"

void adcInit() {
    //Configure required pins
    ANCON0bits.PCFG0 = 0;

    //Set voltage reference
    ADCON0bits.VCFG0 = 0;
    ADCON0bits.VCFG1 = 0;

    //Select A/D Input channel
    ADCON0bits.CHS0 = 0;

    //Set acquisition time
    ADCON1bits.ACQT0 = 1;

    //Set conversion time
    ADCON1bits.ADCS0 = 4;

    //Enable ADC module
    ADCON0bits.ADON = 1;

    PIR1bits.ADIF = 0;
    PIE1bits.ADIE = 1;

    ADCON0bits.GODONE = 1;
}
#ifndef ADC_HELPER_H_
#define ADC_HELPER_H_

/*
 * Handles ADC convesion initializtaion, reading, etc.
 *
 * Authors: Seo Townsend
 */

#include <plib.h>

#define true 1

/*
 * ##########################
 * adcInit
 *   Initialize the ADC on timer0
 * ##########################
 */
void adcInit();

/*
 * ##########################
 * adcIntHandler
 *   Handle adc interrupts
 * ##########################
 */
void adcIntHandler();

#endif
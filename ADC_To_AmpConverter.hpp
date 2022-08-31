
#ifndef ADC_TO_AMPCONVERTER_HPP
#define ADC_TO_AMPCONVERTER_HPP
#include <iostream>
#include <cmath>
using namespace std;

const int ADC_BITS = 12;
const int MAXIMUM_ADC_RANGE = pow(2, ADC_BITS);
const int CONVERSION_SCALE = 10;
const int MAXIMUM_OFFSET = ( MAXIMUM_ADC_RANGE - 2 );

float ADCToAmpereConverter(int f_InputADC_Data);

#endif
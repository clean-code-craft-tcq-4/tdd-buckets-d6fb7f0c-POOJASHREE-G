#include <iostream>
#include "ADC_To_AmpConverter.hpp"
using namespace std;


float ADCToAmpereConverter(int f_InputADC_Data) {

    return ((float)(CONVERSION_SCALE * f_InputADC_Data) / (float)(MAXIMUM_OFFSET)) + (float)(CONVERSION_OFFSET);

}
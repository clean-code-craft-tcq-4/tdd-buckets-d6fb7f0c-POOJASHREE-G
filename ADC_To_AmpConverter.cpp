#include <iostream>
#include "ADC_To_AmpConverter.hpp"
using namespace std;


float ADCToAmpereConverter(int f_InputADC_Data) {

    return ((CONVERSION_SCALE * f_InputADC_Data) / (MAXIMUM_OFFSET)) + (CONVERSION_OFFSET);

}
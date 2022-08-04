#include <iostream>
#include <cstring>
#include "Current_SamplingFunctionality.hpp"
using namespace std;


unsigned int ConsecutiveRanges(int Current_Samples[]) {

    int Current_Samples_arr_size = sizeof(Current_Samples);
    unsigned int count = 1;
    int idx = 1; // index

    while (idx < Current_Samples_arr_size) {
        // check if the current element is equal to
        // previous element.
        if ((Current_Samples[idx] - Current_Samples[idx - 1]) == 1 )
        {
            count++;
            idx++;
        }
    }

    return count;
}

bool SampleRangeReadings(int Current_Samples[], unsigned int ReadingsCount)
{
    unsigned int GetReadingsCount = ConsecutiveRanges(Current_Samples);

    if(GetReadingsCount == ReadingsCount)
    {
        return true;
    }

    return false;
}




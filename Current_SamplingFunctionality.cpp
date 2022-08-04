#include <iostream>
#include <cstring>
#include "Current_SamplingFunctionality.hpp"
using namespace std;


unsigned int ConsecutiveRanges(int Current_Samples[]) {

    const int Current_Samples_arr_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);

    unsigned int count = 0;
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




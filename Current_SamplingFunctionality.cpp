#include <iostream>
#include <cstring>
#include "Current_SamplingFunctionality.hpp"
using namespace std;


unsigned int ConsecutiveRanges(int Current_Samples[], int Current_Samples_size) {

    unsigned int count = 1;
    int idx; // index
    // check if the current element & previous element step is 1.
    for(idx=0; idx < Current_Samples_size; idx++) {

        if ((Current_Samples[idx + 1] - Current_Samples[idx]) == 1 ) {
            count = count + 1;
        }
    }
    return count;
}

bool SampleRangeReadings(int Current_Samples[], int Current_Samples_size, int ReadingsCount)
{
    unsigned int GetReadingsCount = ConsecutiveRanges(Current_Samples, Current_Samples_size);

    if(GetReadingsCount == ReadingsCount)
    {
        return true;
    }
    else
    {
        return false;
    }

}




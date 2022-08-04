#include <iostream>
#include <cstring>
#include "Current_SamplingFunctionality.hpp"
using namespace std;


unsigned int ConsecutiveRanges(int Current_Samples[]) {

    const int Current_Samples_arr_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    unsigned int count = 1;
    int idx = 1; // index

    // check if the current element is equal to
    // previous element.
    for(idx=0; idx < Current_Samples_arr_size; idx++) {

        if ((Current_Samples[idx] - Current_Samples[idx - 1]) == 1 ) {
            count = count + 1;
        }

    }
    return count;
}

bool SampleRangeReadings(int Current_Samples[], int ReadingsCount)
{
    unsigned int GetReadingsCount = ConsecutiveRanges(Current_Samples);

    cout << "got count of " << GetReadingsCount << endl;

    if(GetReadingsCount == ReadingsCount)
    {
        return true;
    }

    return false;
}




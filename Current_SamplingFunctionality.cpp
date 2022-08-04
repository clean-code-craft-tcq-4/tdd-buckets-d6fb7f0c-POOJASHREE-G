#include <iostream>
#include <cstring>
#include "Current_SamplingFunctionality.hpp"
using namespace std;


unsigned int ConsecutiveRanges(int Current_Samples[]) {

    const int Current_Samples_arr_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    unsigned int count = 1;
    int idx; // index
    cout << "sizeof(Current_Samples) =" << sizeof(Current_Samples) << endl;
    cout << "sizeof(Current_Samples[0] =" << sizeof(Current_Samples[0]) << endl;
    cout << "Current_Samples_arr_size =" << Current_Samples_arr_size << endl;
    // check if the current element & previous element step is 1.
    for(idx=0; idx < Current_Samples_arr_size; idx++) {
        
        cout << "Current_Samples[idx +1] " << Current_Samples[idx +1] << endl;
        cout << "Current_Samples[idx ] " << Current_Samples[idx] << endl;
        if ((Current_Samples[idx + 1] - Current_Samples[idx]) == 1 ) {
            count = count + 1;
            cout << "Incremented " << endl;
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
    else
    {
        return false;
    }

}




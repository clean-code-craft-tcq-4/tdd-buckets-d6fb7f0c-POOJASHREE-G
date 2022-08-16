#include <iostream>
#include <cstring>
#include "Current_SamplingFunctionality.hpp"
using namespace std;


unsigned int ConsecutiveRanges(int Current_Samples[], int Current_Samples_size) {

    unsigned int Step_count = 1;
    int index;

    // check if the current element & previous element step is 1.
    for(index=0; index < Current_Samples_size; index++) {

        if ((Current_Samples[index + 1] - Current_Samples[index]) == 1 ) {
            Step_count = Step_count + 1;
        }
    }
    return Step_count;
}




#include <assert.h>
#include <iostream>
#include "Current_SamplingFunctionality.hpp"
using namespace std;

int main() {

    // As a first step, only considering to detect continuous ranges in the samples
    int Current_Samples_1 [] = { 4, 5 };
    int Current_Samples_2 [] = { 4, 5, 10 };
    int Current_Samples_3 [] = { 1, 4, 5, 6, 7, 8 ,10 };

    // Passing Test Case
    assert(SampleRangeReadings(Current_Samples_1, 2) == true);

    // Passing Test Case 
    assert(SampleRangeReadings(Current_Samples_2, 2) == true);

    // Failing Test Case 
    assert(SampleRangeReadings(Current_Samples_3, 5) == true);

    return 0;

}

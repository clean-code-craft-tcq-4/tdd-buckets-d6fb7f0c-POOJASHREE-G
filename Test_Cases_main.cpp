#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include <iostream>
#include "Current_SamplingFunctionality.hpp"
using namespace std;

int main() {

    // As a first step, only considering to detect continuous ranges in the samples
    TEST_CASE("PASSING TEST CASE 1") {
        int Current_Samples_1 [] = { 4, 5 };
        REQUIRE(SampleRangeReadings(Current_Samples_1, 2) == true);
    }

    TEST_CASE("PASSING TEST CASE 2") {
        int Current_Samples_2 [] = { 4, 5, 10 };
        REQUIRE(SampleRangeReadings(Current_Samples_2, 2) == true);
    }

    TEST_CASE("PASSING TEST CASE 3") {
        int Current_Samples_3 [] = { 1, 4, 6, 7, 8, 10 };
        REQUIRE(SampleRangeReadings(Current_Samples_3, 3) == true);
    }

    return 0;

}

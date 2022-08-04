#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include <iostream>
#include "Current_SamplingFunctionality.hpp"
using namespace std;


// As a first step, only considering to detect continuous ranges in the samples
TEST_CASE("PASSING TEST CASE 1") {
    int Current_Samples [] = { 4, 5 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 2) == true);
}

TEST_CASE("PASSING TEST CASE 2") {
    int Current_Samples [] = { 4, 5, 10 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 2) == true);
}

TEST_CASE("PASSING TEST CASE 3") {
    int Current_Samples [] = { 1, 4, 6, 7, 8, 10 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 3) == true);
}

TEST_CASE("FAILING TEST CASE 1") {
    int Current_Samples [] = { 1, 4, 6, 7, 8, 10 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 2) == false);
}
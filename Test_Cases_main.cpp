#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include <iostream>
#include "Current_SamplingFunctionality.hpp"
#include "Test_Cases_main.hpp"
using namespace std;

// As a first step, only considering to detect continuous ranges in the samples
TEST_CASE("PASSING TEST CASE 1") {
    unsigned int Current_Samples [] = { 4, 5 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 2) == true);
}

TEST_CASE("PASSING TEST CASE 2") {
    unsigned int Current_Samples [] = { 4, 5, 10 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 2) == true);
}

TEST_CASE("PASSING TEST CASE 3") {
    unsigned int Current_Samples [] = { 1, 4, 6, 7, 8, 10 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 3) == true);
}

TEST_CASE("FAILING TEST CASE 1") {
    unsigned int Current_Samples [] = { 1, 4, 6, 7, 8, 10 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(SampleRangeReadings(Current_Samples, Current_Samples_size, 2) == false);
}

TEST_CASE("PASSING TEST CASE 1 ( CONSECUTIVE RANGES )") {
    unsigned int Current_Samples [] = { 3, 4, 6, 7, 8, 10, 11, 12 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(GetConsecutiveRange(Current_Samples, Current_Samples_size) == ("3 -> 4 , Reading:2,6 -> 8 , Reading:3,10 -> 12 , Reading:3"));
}

TEST_CASE("PASSING TEST CASE 2 ( CONSECUTIVE RANGES )") {
    unsigned int Current_Samples [] = { 3, 3, 4, 5, 6, 7, 8, 10, 11, 12 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(GetConsecutiveRange(Current_Samples, Current_Samples_size) == ("4 -> 8 Reading:5, 10 -> 12 Reading:3"));

}

TEST_CASE("PASSING TEST CASE 3 ( CONSECUTIVE RANGES )") {
    unsigned int Current_Samples [] = { 4, 4, 5, 6, 7, 8, 8, 10, 11, 12, 12 };
    int Current_Samples_size = sizeof(Current_Samples)/sizeof(Current_Samples[0]);
    REQUIRE(GetConsecutiveRange(Current_Samples, Current_Samples_size) == ("0 -> 1 , Reading:1,4 -> 8 , Reading:6,10 -> 12 , Reading:4"));
}
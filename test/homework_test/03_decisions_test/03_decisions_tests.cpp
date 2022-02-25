#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "decisions.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Numerical Grade to Letter Grade IF") 
{
	REQUIRE(get_letter_grade_using_if(95) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(75) == "C");
	REQUIRE(get_letter_grade_using_if(65) == "D");
	REQUIRE(get_letter_grade_using_if(50) == "F");
}

TEST_CASE("Numerical Grade to Letter Grade SWITCH")
{
	REQUIRE(get_letter_grade_using_switch(95) == "A");
	REQUIRE(get_letter_grade_using_switch(85) == "B");
	REQUIRE(get_letter_grade_using_switch(75) == "C");
	REQUIRE(get_letter_grade_using_switch(65) == "D");
	REQUIRE(get_letter_grade_using_switch(50) == "F");
}


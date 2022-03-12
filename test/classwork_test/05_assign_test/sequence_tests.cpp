#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "sequence.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify GC Content")
{
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
	REQUIRE(get_gc_content("CGCTATAG") == 0.50);
}

TEST_CASE("Verify DNA Complement")
{
	REQUIRE(get_dna_complement("AAAACCCGGT")=="ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT")=="ATTTTCCGGG");
}

TEST_CASE("Verify Reverse String")
{
	REQUIRE(reverse_string("AGCTATAG")=="GATATCGA");
	REQUIRE(reverse_string("CGCTATAG")=="GATATCGC");
}
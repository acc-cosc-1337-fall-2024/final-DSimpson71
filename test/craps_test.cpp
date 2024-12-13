#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Dice rolls are between 1 - 6")
{
	Die mydie;
	int x=10;
	int i=0;
	while(i!=x)
	{	i++;
		int roll = mydie.roll(); 
		// std::cout<<""<<roll<<"\n"; // <----------  For displaying number, since it is tied to system time it will mostly show the same number though
		REQUIRE(((roll>0) && (roll<=6))); 
	}
}
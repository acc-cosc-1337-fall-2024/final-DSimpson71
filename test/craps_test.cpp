#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

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
		mydie.roll();
		int roll = mydie.roll(); 
		std::cout<<""<<roll<<"\n"; //
		REQUIRE(((roll>0) && (roll<=6))); 
	}
}

TEST_CASE("Verify Dice roll from Roll Class are between 2 - 12")
{
	Die d1;
	Die d2;
	Roll myroll(d1,d2);
	int x=10;
	int i=0;
	while(i!=x)
	{	i++;
		myroll.roll_dice();
		auto roll = myroll.roll_value(); 
		std::cout<<""<<roll<<"\n"; // <----------  For displaying number for debug
		REQUIRE(((roll>=2) && (roll<=12))); 
	}
}
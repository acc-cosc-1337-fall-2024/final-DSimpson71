#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"

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
		//std::cout<<""<<roll<<"\n"; // <----------  For displaying number for debug
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
		//std::cout<<""<<roll<<"\n"; // <----------  For displaying number for debug
		REQUIRE(((roll>=2) && (roll<=12))); 
	}
}
TEST_CASE("Verify shooter works and returns values from 2 - 12 each time")
{
	Shooter shoot;
	Die d1;
	Die d2;
	//REQUIRE(typeid(shoot.throw_dice()) == typeid(Roll));
	int x=10;
	int i=0;
	while(i!=x)
	{
		i++;
		auto result = shoot.throw_dice(d1,d2).roll_value();
		REQUIRE(((result>=2) && (result<=12)));
	}

}
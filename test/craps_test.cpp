#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

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
		auto result = shoot.throw_dice(d1,d2)->roll_value();
		REQUIRE(((result>=2) && (result<=12)));
	}

}

TEST_CASE("Verify Phase Variants return the correct Enums")
{
	Die die1;
	Die die2;
	Roll roll(die1,die2);
	Roll* R = &roll;
	ComeOutPhase C;
	int x=10,i=0;
	while(i!=x)
	{
		i++;
		R->roll_dice();
		//Requires C.get_outcome to be one of three options, point, craps or natural
		REQUIRE(((C.get_outcome(R) == RollOutcome::point)||(C.get_outcome(R) == RollOutcome::craps)||(C.get_outcome(R) == RollOutcome::natural)));

	}
	PointPhase P(7);
	x=10;i=0;
	while(i!=x)
	{
		i++;
		R->roll_dice();
		//Requires P.get_outcome to be one of three options, point, no-point or seven_out
		REQUIRE(((P.get_outcome(R) == RollOutcome::point)||(P.get_outcome(R) == RollOutcome::nopoint)||(P.get_outcome(R) == RollOutcome::seven_out)));

	}

}
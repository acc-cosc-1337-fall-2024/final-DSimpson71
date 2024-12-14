#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"
#include <iostream>

int main() 
{
	srand(time(0));
	Die die1;
	Die die2;
	Shooter shooter;
	Roll roll(die1,die2);
	Roll* R = &roll;
	ComeOutPhase C;
	R->roll_dice();
	if (C.get_outcome(R) == RollOutcome::point)
	{
		cout<<"Pointy boi \n";
	}
	else if(C.get_outcome(R) == RollOutcome::natural)
	{
		cout<<"All natural \n";
	}
	else
	{
		cout<<"Something else \n";
	}
	
	cout<<""<<R->roll_value()<<"\n";



	
	


	
	return 0;
}
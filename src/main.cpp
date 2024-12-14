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
	Roll* roll;
	roll = shooter.throw_dice(die1,die2);
	int rolled_value = roll->roll_value();														// cout<<"Roll Value is :"<<roll->roll_value()<<"\n";
	ComeOutPhase come_out_phase;
	while(come_out_phase.get_outcome(roll) == RollOutcome::natural||come_out_phase.get_outcome(roll) == RollOutcome::craps)
	{
		cout<<"The rolled value is: "<<roll->roll_value();
		cout<<"\nRoll again\n";
		roll = shooter.throw_dice(die1,die2);
	}

	cout<<"The rolled value is: "<<roll->roll_value()<<"\n";
	cout<<"Point Phase has begun.\n";
	cout<<"Rolling until rolled value or 7 is rolled \n";
	int point = roll->roll_value();
	roll = shooter.throw_dice(die1,die2);

	PointPhase point_phase(point);

	while((point_phase.get_outcome(roll) != RollOutcome::seven_out)||(point_phase.get_outcome(roll) == RollOutcome::nopoint))
	{
		cout<<"The rolled value is: "<<roll->roll_value();
		cout<<"\nRoll again\n";
		roll = shooter.throw_dice(die1,die2);
	}
	cout<<"Point Phase complete\n";

	shooter.display_rolled_values();

	return 0;
}
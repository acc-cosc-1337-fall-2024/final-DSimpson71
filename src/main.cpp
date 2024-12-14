#include "die.h"
#include "roll.h"
#include "shooter.h"
#include <iostream>

int main() 
{
	Shooter shoot;
	Die d1;
	Die d2;
	
	cout<<"This is "<<shoot.throw_dice(d1,d2).roll_value()<<"\n";
	return 0;
}
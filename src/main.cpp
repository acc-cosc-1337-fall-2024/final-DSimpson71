#include "die.h"
#include "roll.h"
#include <iostream>

int main() 
{
	Die d1;
	Die d2;
	Roll ez_win(d1,d2);
	ez_win.roll_dice();
	auto my_roll = ez_win.roll_value(); 
	std::cout<<"Roll is: "<<my_roll<<"\n";
	return 0;
}
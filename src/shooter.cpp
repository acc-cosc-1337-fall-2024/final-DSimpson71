#include "shooter.h"
#include <vector>


Roll* Shooter::throw_dice(Die& d1,Die& d2)
{
   Roll* myroll = new Roll(d1,d2);
   myroll->roll_dice();
   rolls.push_back(myroll);
   return myroll;
}

void Shooter::display_rolled_values()
{
   std::cout<<"Rolled Values were :\n";
   for(auto* roll:rolls)
   { 
      std::cout<<""<<roll->roll_value()<<"\n";
   }
   
}
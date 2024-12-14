#include "shooter.h"
#include <vector>


Roll Shooter::throw_dice(Die& d1,Die& d2)
{
   Roll* myroll= new Roll(d1,d2);
   myroll->roll_dice();
   rolls.push_back(myroll);
   return *myroll;
}
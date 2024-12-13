#include "roll.h"


void Roll::roll_dice()
{
    auto x = d1.roll();
    auto y = d2.roll();
    rolled_value = x+y;
}

//
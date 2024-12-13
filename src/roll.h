#include "die.h"
#ifndef ROLL_H
#define ROLL_H

class Roll
{
    public:
    Roll(Die& die1, Die& die2) : d1(die1), d2(die2) {}
    void roll_dice();
    const int roll_value() { return rolled_value;};


    private:
    int x =1;
    Die& d1;
    Die& d2;
    int rolled_value;


};

#endif
//
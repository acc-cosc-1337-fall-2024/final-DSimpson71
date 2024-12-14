#include "roll.h"
#include "die.h"

#ifndef SHOOTER_H
#define SHOOTER_H

using std::vector; using std::cout;
class Shooter
{
    public:
    Shooter(){};
    ~Shooter(){for(auto* roll:rolls){delete roll;}}
    Roll* throw_dice(Die& die1,Die& die2);
    void display_rolled_values();

    private:
    vector <Roll*> rolls; 
};



#endif
//
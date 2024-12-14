#include "roll.h"
#ifndef phase_h
#define phase_h


enum class RollOutcome 
{
    natural,
    craps, 
    point,
    seven_out, 
    nopoint 
};

class Phase
{
    public:
    RollOutcome get_outcome(Roll* roll); // make this function have the proper scope resolution

};

#endif
//
#include "phase.h"
#ifndef point_phase_h
#define point_phase_h

class PointPhase : Phase
{
    public:
    PointPhase(int p): point(p){};
    RollOutcome get_outcome(Roll* roll);

    private:
    int point;
};



#endif
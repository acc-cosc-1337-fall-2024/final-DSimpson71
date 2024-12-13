#include "die.h"


int Die::roll()
{ 
    std::srand(static_cast<int>(std::time(0)));
    int rand_num = (std::rand() % 6) + 1;

    return rand_num;
};

//
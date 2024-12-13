#include "die.h"

int Die::roll()
{   
    using namespace std;
    std::random_device rd;
    std::mt19937 generator(rd()); // Had to try this since my numbers werent random enough 
    uniform_int_distribution<int> distribution(1, 6); 
    return distribution(generator);
};

//
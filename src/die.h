#include <iostream>
#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <random>

#ifndef DIE_H
#define DIE_H

class Die
{
    //Die(roll a, int b) : x(a), y(b) {}
    public:
    int roll();


    private:
    int sides = 6;


};
#endif
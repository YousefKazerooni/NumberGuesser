//Seyed Yousef Kazerooni
//Implementing the methods for the class NumberGuesser

#include <iostream>
#include "NumberGuesser.hpp"
using namespace std;


NumberGuesser:: NumberGuesser()
{
    lowerLimit = 0;
    upperLimit = 100;
    int currentGuess = 0;
}



NumberGuesser:: NumberGuesser(int lowerBound, int upperBound)
{
    lowerLimit = lowerBound;
    lowerStored = lowerBound;           //Storing the initial value for lowerLimit before it is changed
    
    upperLimit = upperBound;
    upperStored = upperBound;          //Storing the initial value for upperLimit before it is changed
    
    int currentGuess = 0;
}



void NumberGuesser:: higher()
{
    lowerLimit = currentGuess + 1;
}



void NumberGuesser:: lower()
{
    upperLimit = currentGuess - 1;
}


int  NumberGuesser:: getCurrentGuess()
{
    currentGuess = (lowerLimit + upperLimit) / 2;
    return currentGuess;
}



int NumberGuesser:: getUpperLimit() const
{
    return upperLimit;
}



int NumberGuesser:: getLowerLimit() const
{
    return lowerLimit;
}



void NumberGuesser:: reset()
{
    lowerLimit = lowerStored;          // Resetting the lowerLimit to its initial value
    upperLimit = upperStored;          // Resetting the upperLimit to its initial value
}


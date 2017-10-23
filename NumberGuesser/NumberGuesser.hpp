//Seyed yousef Kazerooni
//Declaration of the class number guesser


#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

class NumberGuesser {
private:
    int lowerLimit;
    int lowerStored;              //this variable will be used in the reset method
    int upperLimit;
    int upperStored;              //this variable will be used in the reset method
    int currentGuess;
    
public:
    NumberGuesser();
    NumberGuesser(int lowerBound, int upperBound);
    void higher();
    void lower();
    int getCurrentGuess();
    void reset();
    int getUpperLimit() const;    //This method is used to get the value of upperLimit
    int getLowerLimit() const;    //This method is used to get the value of lowerLimit
    
};
#endif
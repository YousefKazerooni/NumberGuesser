//Seyed Yousef Kazerooni
// A program that guesses what number you have in mind within a range


#include <iostream>
#include "NumberGuesser.hpp"
using namespace std;

int main()
{
    char playAgain;                   //Y or N determines whether you will play again
    int  currentGuess;                //Stores the midpoints between the upper and lower limits
    NumberGuesser guesser(1, 100);    //initializes a guesser object
    
    do                                                       //the loop determing whether or not to play again
    {
        char input = 'j';                //input determins whether the guess was l/h/c
        
        cout << "Pick a number between ";
        cout << guesser.getLowerLimit() <<" and ";
        cout << guesser.getUpperLimit() <<endl;
        
        
        while ( input != 'c')                                   //the loop to find the right guess
        {
            currentGuess = guesser.getCurrentGuess();
            cout <<"Is the number "<< currentGuess << "? (l/h/c)\n";
            cin >> input;
            
            if (input == 'l')
                guesser.lower();
            else if (input == 'h')
                guesser.higher();
            else if (input == 'c')
                cout << "You picked  "<< currentGuess<< "? Good pick!\n";
        }
        
        cout << "Do you want to play again? (y/n)\n";
        cin >> playAgain;
        guesser.reset();                                        //resetting the guesser to its initial values
    } while (playAgain == 'y');
    
    return 0;
}


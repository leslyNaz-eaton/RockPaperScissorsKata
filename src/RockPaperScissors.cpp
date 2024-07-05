#include "RockPaperScissors.h"
#include <iostream>
using namespace std;

result Game(condition player1, condition player2)
{
    switch (player1)
    {

    case ROCK:

        if (player2 == SCISSORS)
            return WIN;

        else if(player2==PAPER)
            return LOSS;
        else 
        return TIE;

        break;

    case PAPER:

        if (player2 == SCISSORS)
            return LOSS;

        else if(player2 ==ROCK)
            return WIN;

        else
         return TIE;
        break;

    case SCISSORS:

        if (player2 == ROCK)
            return LOSS;

        else if(player2 == PAPER)
            return WIN;
        else 
            return TIE;
        break;

    }
    
 

       
    
}
#include "RockPaperScissors.h"
#include <iostream>
using namespace std;

string Battle(string x, string y)
{
    if( x=="Paper"&&  y == "Rock")
   { return "Paper Wins!";}

    else 
   { return "Scissors Wins!";}
}
#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

#include <iostream>
using namespace std;



typedef enum{ROCK,PAPER,SCISSORS} condition;
typedef enum{WIN,LOSS,TIE} result;

result Game(condition player1, condition player2);

#endif
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

char Referee::refGame(HumanPlayer *player1,ComputerPlayer *player2)
{
    char result = 'A';
    char hmove = player1->makeMove();
    char cmove = player2->makeMove();
    if (hmove == cmove)
    {
        result = 'T';
    }
    else if (hmove == 'P' && cmove == 'R')
    {
        result = 'W';
    }
    else
    {
        result = 'L';
    }
    return result;
}
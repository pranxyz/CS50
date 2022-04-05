#ifndef _REFEREE_H
#define _REFEREE_H
#include "Computer.h"
#include "Human.h"

class Referee
{   
    public:
        char refGame(HumanPlayer *player1,ComputerPlayer *player2);
};

#endif
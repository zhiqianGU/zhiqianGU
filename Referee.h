#pragma once
#include "Player.h"
#include "Human.h"
#include "Computer.h"
class Referee :
    public Player
{
    
public:
    Referee(); // constructor
    Player* refGame(Player* player1, Player* player2);
    Player* player1;
    Player* player2;
    
};


#include "Referee.h"
#include"Computer.cpp"
#include"Human.cpp"
#include <iostream>
Referee::Referee() {

}

Player* Referee::refGame(Player* player1, Player* player2)
{

	if (player1->move == 'P') {
		return player1;
	}
	else if (player1->move == 'R') {
		return nullptr;
	}
	else if (player1->move == 'S') {
		return player2;
	}
	
		return 0;
}

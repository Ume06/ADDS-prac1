#ifndef REFEREE_H // include guard
#define REFEREE_H
#include "Player.cpp"

class Referee {
  public:
    Player* refGame(Player* player1, Player* player2);
};

#endif
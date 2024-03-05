#include "Player.cpp"

class Referee {
  public:
    Player* refGame(Player* player1, Player* player2) {
      char move1 = player1->makeMove();
      char move2 = player2->makeMove();

      if (move1 == 'R') {
        if (move2 == 'R') return nullptr;
        else if (move2 == 'P') return player2;
        else if (move2 == 'S') return player1;
        else return nullptr;
      } else if (move1 == 'R') {
        if (move2 == 'P') return player2;
        else if (move2 == 'P') return nullptr;
        else if (move2 == 'S') return player1;
        else return nullptr;
      }  else if (move1 == 'S') {
        if (move2 == 'R') return player2;
        else if (move2 == 'P') return player1;
        else if (move2 == 'S') return nullptr;
        else return nullptr;
      } 
    }
};
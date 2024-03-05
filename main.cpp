#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include <iostream>

int main() {
  Player* player1 = new Human("Jack");
  Player* player2 = new Computer;
  cout << player1->getName() << endl;

  Referee ref;

  Player* winner = ref.refGame(player1, player2);
  if (winner) cout << winner->getName() << " Wins" << endl;
  else cout << "It's a Tie" << endl;
  return 0;
};
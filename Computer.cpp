// makeMove()
// getName()
#include <iostream>
#include "Player.cpp"
#include "Computer.h"

using namespace std;

class Human : public Player{
  public:
    char makeMove() {
      return 'R';
    }

    string getName() {
      return "Computer";
    }
};
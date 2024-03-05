// makeMove()
// getName()
#include <iostream>
#include "Player.cpp"
#include "Human.h"

using namespace std;

class Human : public Player{
  public:
    char makeMove() {
      char x;
      cout << "Enter move: ";
      cin >> x;
      return x;
    }

    string getName() {
      return "Human";
    }
};
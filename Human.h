#include <iostream>
#include "Player.cpp"

using namespace std;

class Human : public Player{
  public:
    Human(string x) {
      string name = x;
    };
    Human() {
      string name = "Human";
    };
    char makeMove() {}
    string getName() {}
};
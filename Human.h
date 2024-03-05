#ifndef HUMAN_H // include guard
#define HUMAN_H
#include <iostream>
#include "Player.cpp"

using namespace std;

class Human : public Player{
  public:
    Human(string x);
    char makeMove();
    string getName();
  private:
    string name = "Human";
};

#endif
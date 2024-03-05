#ifndef COMPUTER_H // include guard
#define COMPUTER_H
#include <iostream>
#include "Player.cpp"

using namespace std;

class Computer : public Player{
  public:
    char makeMove();
    string getName();
};

#endif
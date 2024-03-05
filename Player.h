#ifndef PLAYER_H // include guard
#define PLAYER_H
#include <iostream>

using namespace::std;

class Player {
  public:
    virtual char makeMove()=0;
    virtual string getName()=0; 
};

#endif
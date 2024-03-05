// makeMove()
// getName()
#include <iostream>
#include "Human.h"

using namespace std;

string Human::getName() {
  return name;
}

char Human::makeMove() {
  char x;
  cout << "Enter move: ";
  cin >> x;
  return x;
}

Human::Human(string x) {
  name = x;
};
#ifndef HEROES_WARRIOR_H
#define HEROES_WARRIOR_H

#include "Hero.h"

using namespace std;

class Warrior : public Hero {
public:
    Warrior(const string &name) : Hero(name) {}
};

#endif //HEROES_WARRIOR_H

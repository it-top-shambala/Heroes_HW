#ifndef HEROES_ARCHER_H
#define HEROES_ARCHER_H

#include "Hero.h"

using namespace std;

class Archer : public Hero {
public:
    Archer(const string &name) : Hero(name) {}
};


#endif //HEROES_ARCHER_H

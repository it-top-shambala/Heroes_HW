#ifndef HEROES_ARCHER_H
#define HEROES_ARCHER_H

#include "Hero.h"
#include "Creator/ArcherCreator.h"

using namespace std;

class Archer : public Hero {
protected:
    int _health;
    string _name;
    Weapon weapon;
    Race rase;
    Choice choice;
public:
    Archer() 
    {
        //TODO реализовать конструткор
    }
};


#endif //HEROES_ARCHER_H

#ifndef HEROES_WARRIOR_H
#define HEROES_WARRIOR_H

#include "Hero.h"
#include "../Creator/c_hero/WarriorCreator.h"
#include <string>

using namespace std;

class Warrior : public Hero, public WarriorCreator
{
protected:
    int _health;
    string _name;
    Weapon weapon;
    Race rase;
    Choice choice;
public:
    Warrior() 
    {
    // TODO реализовать конструктор
    }
};

#endif //HEROES_WARRIOR_H

#ifndef HEROES_AXE_H
#define HEROES_AXE_H

#include "Weapon.h"
#include "../Hero/Hero.h"
using namespace std;

class Axe : public Weapon 
{
protected:
    int _damage;
    int _distance;
public:
    Axe() {
        //TODO реализовать конструктор
    }
};

#endif //HEROES_AXE_H

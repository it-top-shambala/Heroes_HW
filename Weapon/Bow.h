#ifndef HEROES_BOW_H
#define HEROES_BOW_H

#include "Weapon.h"
#include "../Hero/Hero.h"

using namespace std;

class Bow : public Weapon 
{
protected:
    int _damage;
    int _distance;
public:
    Bow() {
        //TODO реализовать конструктор
    }
};

#endif //HEROES_BOW_H

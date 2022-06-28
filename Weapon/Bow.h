#ifndef HEROES_BOW_H
#define HEROES_BOW_H
#include "Weapon.h"

using namespace std;

class Bow :public Weapon{
private:
    int WeaponDamage = 30;
public:
    int GetDamage() override {return WeaponDamage;}
};


#endif //HEROES_BOW_H

#pragma once
#include "Weapon.h"

using namespace std;

class Axe :public Weapon{
private:
    int WeaponDamage = 10;
public:
    int GetDamage() override {return WeaponDamage;}
};



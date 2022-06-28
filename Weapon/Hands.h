#pragma once
#include "Weapon.h"

using namespace std;

class Hands :public Weapon{
private:
    int WeaponDamage = 1;
public:
    int GetDamage() override {return WeaponDamage;}
};


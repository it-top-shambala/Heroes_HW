#ifndef HEROES_WEAPON_H
#define HEROES_WEAPON_H

using namespace std;

class Weapon {
protected:
    int _damage;

public:
    int GetDamage() {
        return _damage;
    }
};


#endif //HEROES_WEAPON_H

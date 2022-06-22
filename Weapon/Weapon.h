#ifndef HEROES_WEAPON_H
#define HEROES_WEAPON_H

using namespace std;

class Weapon {
protected:
    int _damage;
    int _distance;

public:
    int GetDamage() {
        return _damage;
    }
    int GetDistance()
    {
        return _distance;
    }
};


#endif //HEROES_WEAPON_H

#include <iostream>
#include "Race/Elf.h"
#include "Race/Orc.h"
#include "Weapon/Axe.h"
#include "Weapon/Bow.h"
#include "Specialization/Specialization.h"
#include "Race/Race.h"
#include "Specialization/Warrior.h"
#include "Specialization/Archer.h"
#include <string>
#include "Hero.h"

using namespace std;

int main() {

    Hero Player("Elf", "Archer");

    cout << Player.ShowHeroDmg() << endl;

    Player.SetWeapon("Bow");
    cout << Player.ShowHeroDmg() << endl;

    Hero Enemy("Orc", "Warrior");

    cout << Enemy.ShowHeroHP() << endl;

    Player.Attack(Enemy);

    cout << Enemy.ShowHeroHP() << endl;

    return 0;
}

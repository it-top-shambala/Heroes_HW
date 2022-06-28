#ifndef HEROES_HERO_H
#define HEROES_HERO_H
#include "Race/Elf.h"
#include "Race/Orc.h"
#include "Weapon/Axe.h"
#include "Weapon/Bow.h"
#include "Specialization/Specialization.h"
#include "Race/Race.h"
#include "Specialization/Warrior.h"
#include "Specialization/Archer.h"
#include "Weapon/Hands.h"
#include <string>

using namespace std;

class Hero {
private:
    Race* HeroRace;
    Specialization* HeroSpec;
    Weapon* HeroWeapon = new Hands;
    int HeroHP;
    int HeroDamage;
public:
    Hero(string NameRace, string NameSpec){
        if (NameRace == "Elf"){
            HeroRace = new Elf;
            HeroHP = HeroRace->GetHP();
        }
        else if (NameRace == "Orc"){
            HeroRace = new Orc;
            HeroHP = HeroRace->GetHP();
        }
        if (NameSpec == "Warrior"){
            HeroSpec = new Warrior;
            HeroDamage = HeroSpec->GetDamage();
        }
        else if(NameSpec == "Archer"){
            HeroSpec = new Archer;
            HeroDamage = HeroSpec->GetDamage();}
    }

    int ShowHeroDmg(){return HeroDamage + HeroWeapon->GetDamage();}
    int ShowHeroHP(){return HeroHP;}

    void SetWeapon(string WeaponName){
        if (WeaponName == "Bow") {HeroWeapon = new Bow;}
        else if (WeaponName == "Axe") {HeroWeapon = new Axe;}
    }

    void Attack(Hero& Enemy){
        Enemy.HeroHP -= HeroDamage + HeroWeapon->GetDamage();
    }

};


#endif //HEROES_HERO_H

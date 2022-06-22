#pragma once
#include "../../Hero/Hero.h"
#include <string>
#include "../../Choice/Choice.h"
using namespace std;

class WeaponCreator : public Hero, public Config
{
protected:
	WeaponCreator(){}
public:
	virtual Weapon setWeapone(Choice choice)
	{		
			if (choice.getWeapon == "axe")
			{
				AxeCreator* axe;
				axe->weaponeCreate;

			}
			if (choice.getHero == "bow")
			{
				BowCreator* bow;
				bow->weaponeCreate;
			}
		
	}
	virtual Weapon weaponCreate() = 0;
};
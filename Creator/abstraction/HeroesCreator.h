#pragma once
#include "../../Hero/Hero.h"
#include <string>
#include "../../Config.h"
#include "../c_hero/ArcherCreator.h"
#include "../c_hero/WarriorCreator.h"
using namespace std;

class HeroesCreator : public Hero, public Config;
{
protected:
	HeroesCreator(){}
public:
	virtual Hero* createHero(Choice choice) override
	{
		if (choice.getHero == "archer")
		{
			ArcherCreator* archer;
			archer->createHero();

		}
		if (choice.getHero == "Warrior")
		{
			WarriorCreator* warrior;
			warrior->createHero();
		}		
	}
	virtual Hero* createHero() = 0;
};
#pragma once
#include "../Hero.h"
#include "../Race.h"
#include "../../Choice/Choice.h"
#include <string>
#include "../../Creator/c_race/HumanCreator.h"
#include "../../Config.h"

using namespace std;

class RaceCreator : public Hero, public Config
{
protected:
	RaceCreator(){}
public:
	virtual Race setRace(Choice choice)
	{
		if (choice.getRace == "human")
		{
			HumanCreator* human;
			human->raceCreate();

		}
		if (choice.getHero == "orc")
		{
			OrcCreator* orc;
			orc->raseCreate();
		}
		return Race;
	}
	virtual Race raseCreate() = 0;
};
#pragma once
#include "../../Creator/abstraction/RaceCreator.h"
#include "../../Race/Human.h"
#include <string>

using namespace std;

class HumanCreator : public RaceCreator 
{
protected:
	HumanCreator() {}
public:
	virtual Race raseCreate() override
	{
		return new Human;
	}

};
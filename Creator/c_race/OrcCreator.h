#pragma once
#include "../../Creator/abstraction/RaceCreator.h"
#include "../../Race/Human.h"
#include <string>

using namespace std;

class OrcCreator : public RaceCreator
{
protected:
	OrcCreator() {}
public:
	virtual Race raseCreate() override
	{
		return new Orc;
	}

};
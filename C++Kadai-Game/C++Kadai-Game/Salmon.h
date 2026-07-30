#pragma once
#include "Character.h"

class Salmon:public Character
{
public:
	int Battle(int select, int action) override;
	int Defence(int select, int action) override;
};


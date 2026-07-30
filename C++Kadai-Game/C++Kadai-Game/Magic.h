#pragma once
#include "Character.h"
class Magic:public Character
{
public:
	void command(int select) override;
};


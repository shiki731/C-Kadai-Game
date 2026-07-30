#pragma once

class Character
{
public:
	int power = 0;
	virtual int Battle(int select,int action);
	
	virtual int Defence(int select, int action);
private:
	int damage = 0;
	int Edamage = 0;
};


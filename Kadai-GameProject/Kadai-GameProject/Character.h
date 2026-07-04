#pragma once

class Character {
protected:
	
	virtual void command(int select) {
		if (select == 1) {

		}
		else if (select == 2) {

		}
	}

protected:
	int pow = 0;
};

//sword‚Æmagic‚Æsalmon‚ð‚Â‚­‚é
//sword‚Í35,magic‚Í30,salmon‚Í35

class Sword :public Character {
	
};

class Magic :public Character {

};

class Salmon :public Character {

};
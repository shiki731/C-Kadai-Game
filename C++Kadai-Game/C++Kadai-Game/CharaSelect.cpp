#include "CharaSelect.h"
#include <iostream>

int CharaSelect::charaSelect() {
	std::cout << "ƒLƒƒƒ‰‚ð‘I‘ð 1,Œ•Žm 2,–‚–@Žg‚¢ 3,¢Š«Žm" << std::endl;
	scanf_s("%d", &selectNum);
	return selectNum;
}

int CharaSelect::actionSelect() {
	std::cout << "‹Z‚ð‘I‘ð 1,UŒ‚ 2,–hŒä" << std::endl;
	scanf_s("%d", &selectNum);
	return selectNum;
}
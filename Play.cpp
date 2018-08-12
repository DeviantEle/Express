#include "Play.h"
#include "Character.h"
#include <iostream>

int Play::PlayGame() {
	std::cout << ":Playing Game:" << std::endl;
	return 0;
}

int Play::PlayCharacter() {
	Character characterOBJ;
	std::cout << characterOBJ.CharacterInfo() << std::endl;
	return 0;
}
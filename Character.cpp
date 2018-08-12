#include "Character.h"
#include <iostream>

Character::Character() {
	c_level = 0;
	c_exp = 0;
	c_nextexp = 25;
	c_attack = 1;
	c_defense = 1;
	c_health = 3;
	c_mana = 5;
	c_perceived_swaglevel = 10;
	c_swaglevel = 0;
	c_inventory = 5;
	c_posx = 0;
	c_posy = 0;
	c_posz = 0;
}

int Character::CharacterInfo() {
	std::cout << c_nextexp << std::endl;
	return 0;
}

int Character::Leveler() {
	c_levelUp = false;
	if (c_exp >= c_nextexp) {
		c_level++;
		c_remexp = c_exp - c_nextexp;
		c_exp = 0;
		c_nextexp = CalcLevel();
	}

	return 0;
}

int Character::CalcLevel() {
	c_nextexp *= c_nextexp;
	return c_nextexp;
}

int Character::GainExp() {
	switch (c_expgain) {
	case 0: 
		break;
	case 1:
		break;
	case 2:
		break;
	}
	return c_exp;
}
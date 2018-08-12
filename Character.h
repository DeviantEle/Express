#ifndef CHARACTER_H_

#define CHARACTER_H_

class Character {
private:
	unsigned int c_expgain;
	unsigned int c_remexp;
	unsigned int c_level;
	unsigned int c_exp;
	unsigned int c_nextexp;
	unsigned int c_attack;
	unsigned int c_defense;
	unsigned int c_health;
	unsigned int c_mana;
	bool c_levelUp;
	int c_perceived_swaglevel;
	int c_swaglevel;
	unsigned int c_inventory;
	int c_posy;
	int c_posx;
	int c_posz;

public:
	Character();
	int CharacterInfo();
	int Leveler();
	int CalcLevel();
	int GainExp();

};

#endif

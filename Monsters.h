#ifndef MONSTERS_H_

#define MONSTERS_H_

class Muggles {
private:
    unsigned int m_level;
    unsigned int m_exp;
    unsigned int m_attack;
    unsigned int m_defense;
    unsigned int m_health;
    unsigned int m_galleons;
    int m_posx;
    int m_posy;
    int m_posz;
    bool m_alive;

public:
    int GiveStats();
    int Combat();
    int GiveRewards();

};

class Students {
private:
    unsigned int s_level;
    unsigned int s_exp;
    unsigned int s_attack;
    unsigned int s_defense;
    unsigned int s_health;
    unsigned int s_galleons;
    int s_posx;
    int s_posy;
    int s_posz;
    bool s_alive;

public:
    int GiveStats();
    int Combat();
    int GiveRewards();

};

#endif
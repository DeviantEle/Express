#include "Monsters.h"
#include <cstdlib>

// Muggles Code

int Muggles::GiveStats() {
    m_level = rand() % 1 + 3;
    m_exp = rand() % 5 + 10;
    m_attack = rand() % 1 + 3;
    m_defense = rand() % 1 + 2;
    m_health = rand() % 3 + 5;
    m_galleons = 1;
    return 0;
}

int Muggles::Combat() {

    return 0;
}

int Muggles::GiveRewards() {

    return 0;
}

// Students Code

int Students::GiveStats() {

    return 0;
}

int Students::Combat() {

    return 0;
}

int Students::GiveRewards() {

    return 0;
}
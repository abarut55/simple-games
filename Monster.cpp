//
// Created by Abdullah Barut on 2/22/23.
//

#include "Monster.h"

Monster::Monster(std::string name, int health, int attack) :
        mon_name{name},
        mon_health{health},
        mon_attack{attack}
{}

std::string Monster::getName() const {
    return mon_name;
}

int Monster::getHealth() const {
    return mon_health;
}

int Monster::getAttack() const {
    return mon_attack;
}

void Monster::takeDamage(int damage) {
    mon_health -= damage;
}
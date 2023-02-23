//
// Created by Abdullah Barut on 2/22/23.
//

#include "Monster.h"

Monster::Monster(int health) :
        mon_health{health} {}

int Monster::getHealth() {
    return mon_health;
}

void Monster::takeDamage(int damage) {
    mon_health -= damage;
}

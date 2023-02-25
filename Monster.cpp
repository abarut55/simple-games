//
// Created by Abdullah Barut on 2/22/23.
//

#include "Monster.h"


Monster::Monster() = default;

Monster::Monster(int health) :
        mon_health{health} {}

int Monster::get_health() {
    return mon_health;
}

int Monster::take_damage(int damage) {
    mon_health -= damage;
    return mon_health;
}

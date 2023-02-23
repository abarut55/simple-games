//
// Created by Abdullah Barut on 2/22/23.
//

#ifndef M2OEP_ABARUT_MONSTER_H
#define M2OEP_ABARUT_MONSTER_H

#include <string>

class Monster {
public:
    Monster(int health);
    int getHealth();
    void takeDamage(int damage);

private:
    int mon_health;
};

#endif //M2OEP_ABARUT_MONSTER_H


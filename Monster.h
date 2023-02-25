//
// Created by Abdullah Barut on 2/22/23.
//

#ifndef M2OEP_ABARUT_MONSTER_H
#define M2OEP_ABARUT_MONSTER_H

#include <string>

class Monster {
public:
    Monster();

    Monster(int health);
    int get_health();
    int take_damage(int damage);

private:
    int mon_health;
};

#endif //M2OEP_ABARUT_MONSTER_H


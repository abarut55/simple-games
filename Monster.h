//
// Created by Abdullah Barut on 2/22/23.
//

#ifndef M2OEP_ABARUT_MONSTER_H
#define M2OEP_ABARUT_MONSTER_H

#include <string>

class Monster {
public:
    Monster(std::string name, int health, int attack);
    std::string getName() const;
    int getHealth() const;
    int getAttack() const;
    void takeDamage(int damage);

private:
    std::string mon_name;
    int mon_health;
    int mon_attack;
};

#endif //M2OEP_ABARUT_MONSTER_H


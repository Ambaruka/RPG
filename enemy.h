//
// Created by AmbarPC on 19/02/2024.
//

#ifndef RPG_ENEMY_H
#define RPG_ENEMY_H
#include "character.h"

class enemy:Character{
public:
    enemy(string name, int health, int attack, int defense) : Character(name, health, attack, defense){}
};

#endif //RPG_ENEMY_H

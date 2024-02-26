//
// Created by AmbarPC on 19/02/2024.
//

#ifndef RPG_ENEMY_H
#define RPG_ENEMY_H
#include "Player.h"
#include "character.h"



class enemy: Character{
public:
    enemy(string name, int health, int attack, int defense);

    void enemyturn(enemy *attack){

                figth(enemy _attack,Player _health);
        };
};

#endif //RPG_ENEMY_H

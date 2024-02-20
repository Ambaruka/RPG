//
// Created by AmbarPC on 19/02/2024.
//

#ifndef RPG_MAIN_H
#define RPG_MAIN_H
#include "character.h"
#include "Player.h"
#include <string>
#include "enemy.h"

Player *player= new Player("Ambar", 75,80,70,2);
enemy *enemy= new enemy("vida",90,80,60)



void turn(Character character){
    int election;
    cout<<"Elija la acció que desea ejecutar"<<"\n1-Atacar \n2-Huir \n3-Usar pocion"<<endl;
    cin>>election;
    switch (election) {
        case 1:
            figth(character,enemy);
            break;
        case 2:
            cout<<"No fue posible huir"<<endl;
            break;
        case 3:
            cure(character.poison, character.health);
            break;
    }
}

#endif //RPG_MAIN_H

//
// Created by AmbarPC on 25/02/2024.
//

#ifndef RPG_UTILSH_H
#define RPG_UTILSH_H

#include "Player.h"
#include "enemy.h"


void yourturn(Character character){
    ko(Player _health)

    cout<<"Elija la acció que desea ejecutar"<<"\n1-Atacar \n2-Huir \n3-Usar pocion"<<endl;
    cin>>int election;
    switch (election) {
        case 1:
            figth(Player(&&), enemy(&&));
            break;
        case 2:
            cout<<"No fue posible huir"<<endl;
            break;
        case 3:
            cure(character _poison, character _health);
            break;
    }
}

#endif //RPG_UTILSH_H

//
// Created by AmbarPC on 19/02/2024.
//

#ifndef RPG_PLAYER_H
#define RPG_PLAYER_H

#include <string>
#include "enemy.h"
#include "character.h"


class Player: Character
{
private:
    int poison;
public:
    Player(string name, int health, int attack, int defense, int _poison) : Character(name, health, attack, defense) {
        poison=_poison;
        _poison=1;
    }

    void cure(int _poison,int _health){
        if (_poison>=1){
            _health+10 = _health;
            _poison-1= _poison;
            cout<<"¡En hora buena te curaste 10 puntos!\n"<<"Salud actual="<<_health<<endl;
        } else{
            cout<<"Lastima, no tienes suficientes pósiones"<<endl;
        }
    }

    void ko(Player _health){
        if (dead= true){
            cout<<"KO"<<"\n te ham derrotado, suerte a la proxima"<<endl;
            return break;
        }
    }

    void yourturn(Character character){
        ko(Player _health)
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

};


#endif //RPG_PLAYER_H

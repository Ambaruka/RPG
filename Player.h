//
// Created by AmbarPC on 19/02/2024.
//

#ifndef RPG_PLAYER_H
#define RPG_PLAYER_H
#include "character.h"

using namespace std;

class Player: Character
{
private:
    int poison=1;
public:
    Player(string name, int health, int attack, int defense, int _poison) : Character(name, health, attack, defense) {
        poison=_poison;
    }

    void cure(int _poison,int _health){
        if (_poison>=1){
            _health+10 ==  _health;
            _poison-1==_poison;
            cout<<"¡En hora buena te curaste 10 puntos!\n"<<"Salud actual="<<_health<<endl;
        } else{
            cout<<"Lastima, no tienes suficientes pósiones"<<endl;
        }
    }
};

#endif //RPG_PLAYER_H

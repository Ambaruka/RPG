
//Ambar Delgado 2°O  Desarrollo de softwear

#ifndef RPG_CHARACTER_H
#define RPG_CHARACTER_H

#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;

class Character{
private:
    string name;
    int health;
    int attack;
    int defense;
    int damage=0;
    bool dead=false;
    int poison;
public:



    Character(string _name, int _health, int _attack, int _defense,int _damage,bool _dead,int _poison) {
        name = _name;
        health = _health;
        attack = _attack;
        defense = _defense;
        damage= _damage;
        dead= _dead;
        poison=_poison;

    }

    string getName() {
        return name;
    }

    int getAttack() {
        return attack;
    }

    int getHealth() {
        return health;
    }

    int getDamage(){
        return damage;
    }


    int getDefense(){
        return defense;
    }


};

    void totaldamage(int _damage){
        this->_attack+_damage=_damage;
        if (_damage>= _health){
            _dead= true;
        } else{
            cout<<"se recibio " <<this->attack <<"de daño \nEl daño to tal es "<< _damage()<< endl;
        }

        void figth(Character character,Character character1){
            if (character.attack<character1.defense){
                cout<<"Su defensa es demaciado alta, tus ataques no tiene efecto"<<endl;
            }
            else{
                totaldamage(character1.damage);
            }
        }



};
#endif //RPG_CHARACTER_H
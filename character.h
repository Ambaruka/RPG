
//Ambar Delgado 2°O  Desarrollo de softwear

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

public:
    bool dead=false;
    int poison;


    Character(string _name, int _health, int _attack, int _defense) {
        name = _name;
        health = _health;
        attack = _attack;
        defense = _defense;

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

    void totaldamage(int _damage){
        this->damage+=_damage;
        if (_damage>=health){
             dead= true;
            //espacio pra función
        } else{
            cout<<"se recibio " <<this->damage <<"de daño \nEl daño to tal es "<< this->getDamage()<< endl;
        }
    }

    int getDefense(){
        return defense;
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

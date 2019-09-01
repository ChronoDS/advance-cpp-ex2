#include "Weapon.h"

Weapon::Weapon(const Point2d& location, int damage, int bulletsPerTurn):
                                    Weapon(location, damage, bulletsPerTurn){}
Weapon::Weapon(int damage, int bulletsPerTurn): Weapon(damage, bulletsPerTurn){}
Weapon::~Weapon(){}
bool Weapon::checkItem(const Item* other){
    return this->getTotalDamage() > ((Weapon*)other)->getTotalDamage(); 
}
int Weapon::getDamage(){
    return damage;
}
int Weapon::getBulletsPerTurn(){
    return bulletsPerTurn;
}
int Weapon::getTotalDamage(){
    return damage * bulletsPerTurn;
}
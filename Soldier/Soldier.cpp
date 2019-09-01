
#include "Soldier.h"
#include <algorithm>                // needs for swap

Soldier::Soldier(const Point2d& location, int hp, int movementSpeed, Color color, const Weapon* weapon):
         location(location), hp(hp), movementSpeed(movementSpeed), team(color), weapon(weapon), isAlive(TRUE) {}
Soldier::~Soldier(){
    if(weapon)
        delete weapon;
    if(bodyArmor)
        delete bodyArmor;
    if(sheildArmor)
        delete sheildArmor;
}

void Soldier::die(){
    location.movePoint(-1, -1);
    isAlive = FALSE;
}

int Soldier::getHP(){
    return hp;
}

const Weapon* Soldier::getWeapon(){
    return weapon;
}
int Soldier::getDamage(){
    if(weapon){
        return weapon->getDamage();
    }else{
        return 10;
    }
}
void move(const Point2d& pointToMove){
    location.movePoint(pointToMove);
}
void Soldier::setHP(int hp){
    this->hp = hp;
}
double getMovementSpeed(){
    return movementSpeed;
}
Color getColor(){
    return team;
}
void Soldier::setMovmentSpeed(double speed){
    this->movementSpeed = speed;
}
void Soldier::pick(const Item& other){
    changeEquipment(other);
}  
Item* Soldier::changeEquipment(Weapon* other){
    if(weapon != nullptr){
        if(!weapon->checkItem(&other)){
            Point2d tmp = weapon->getLocation();
            weapon->setLocation(other->getLocation());
            other->setLocation(tmp);
            std::swap(weapon, other);
            return other;
        }else{
            return other;
        }
    }else{
        return nullptr;
    }
}
Item* Soldier::changeEquipment(ShieldArmor* other){
    if(sheildArmor != nullptr){
        if(!ShieldArmor->checkItem(&other)){
            ShieldArmor tmp = ShieldArmor->getLocation();
            ShieldArmor->setLocation(other->getLocation());
            other->setLocation(tmp);
            std::swap(ShieldArmor, other);
            return other;
        }else{
            return other;
        }
    }else{
        ShieldArmor = other;
        return nullptr;
    }
}
Item* Soldier::changeEquipment(BodyArmor* other){
    if(bodyArmor != nullptr){
        if(!bodyArmor->checkItem(&other)){
            Point2d tmp = bodyArmor->getLocation();
            bodyArmor->setLocation(other->getLocation());
            other->setLocation(tmp);
            std::swap(bodyArmor, other);
            return other;
        }else{
            bodyArmor = other;
            return other;
        }
    }else{
        return nullptr;
    }
}




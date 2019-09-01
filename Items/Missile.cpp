#include "Missile.h"

Missile::Missile(const Point2d& location): Weapon(location, 100, 1){} 
Missile::Missile(): Weapon(100, 1){}
Missile::~Missile(){}

WeaponType Missile::getWeaponType(){
    return Heavy;
}
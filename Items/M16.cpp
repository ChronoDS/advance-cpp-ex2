#include "M16.h"

M16::M16(const Point2d& location): Weapon(location, 50, 1){} 
M16::M16(): Weapon(50, 1){}
M16::~M16(){}

WeaponType M16::getWeaponType(){
    return Light;
}

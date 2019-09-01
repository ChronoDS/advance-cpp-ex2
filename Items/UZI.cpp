#include "UZI.h"

UZI::UZI(const Point2d& location): Weapon(location, 40, 3){} 
UZI::UZI(): Weapon(40, 3){}
UZI::~UZI(){}

WeaponType UZI::getWeaponType(){
    return Light;
}
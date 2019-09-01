#ifndef MISSILE_H
#define MISSILE_H

#include "Weapon.h"

class Missile: public Weapon{
  
  public:  
    Missile(const Point2d& location);
    Missile();
    ~Missile();
    WeaponType getWeaponType( );
};

#endif
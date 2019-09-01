#ifndef M16_H
#define M16_H

#include "Weapon.h"

class M16: public Weapon{
  
  public:  
    M16(const Point2d& location);
    M16();
    ~M16();
    WeaponType getWeaponType( );
};

#endif
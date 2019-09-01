#ifndef UZI_H
#define UZI_H

#include "Weapon.h"

class UZI: public Weapon{
  
  public:  
    UZI(const Point2d& location);
    UZI();
    ~UZI();
    WeaponType getWeaponType( );
};

#endif
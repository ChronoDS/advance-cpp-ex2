#ifndef SHIELD_ARMOR_H
#define SHIELD_ARMOR_H

#include "DefenceItem.h"

class ShieldArmor: public DefenceItem{
  
  public:
    ShieldArmor(const Point2d& location, double defenceRate);
    ShieldArmor(double defenceRate);
    ~ShieldArmor();
    DefenceType getDefenceType();
};

#endif
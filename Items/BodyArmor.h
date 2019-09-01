#ifndef BODY_ARMOR_H
#define BODY_ARMOR_H

#include "DefenceItem.h"

class BodyArmor: public DefenceItem{
  
  public:
    BodyArmor(const Point2d& location, double defenceRate);
    BodyArmor(double defence_rate);
    ~BodyArmor();
    DefenceType getDefenceType();
};

#endif
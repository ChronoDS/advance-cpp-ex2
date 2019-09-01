/**
 *  Derived factory design pattern 
 */

#ifndef WEAPON_FACTORY_H
#define WEAPON_FACTORY_H

#include "ItemFactory.h"

class WeaponFactory: public ItemFactory{
  public:
    Item* getItem(const Point2d& location = NULL, const std::string& item, double defenceRate=0);
};

#endif
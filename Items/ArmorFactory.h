/**
 *  Derived factory design pattern 
 */

#ifndef ARMOR_FACTORY_H
#define ARMOR_FACTORY_H

#include "ItemFactory.h"

class ArmorFactory: public ItemFactory{
  public:
    Item* getItem(const Point2d& location = NULL, const std::string& item, double defenceRate);
};

#endif
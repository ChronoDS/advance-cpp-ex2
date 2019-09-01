/**
 * This class represent Abstract Factory class to 
 * obtain ItemFactory*(Defence or Weapon).
 */
 
#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include "ArmorFactory.h"
#include "WeaponFactory.h"

class AbtractFactory{
  public:
    Factory* getFactory(const std::string& factoryType);
};

#endif
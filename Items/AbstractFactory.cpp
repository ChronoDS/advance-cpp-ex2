
#include "AbstractFactory.h"

Factory* AbstractFactory::getFactory(const std::string& factoryType){
    if(item.compare("Weapon") == 0){
        return new WeaponFactory();
    }else if(item.compare("Armor") == 0){
        return new ArmorFactory();
    }
    return nullptr;
}
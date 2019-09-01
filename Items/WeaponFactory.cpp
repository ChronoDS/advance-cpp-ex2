
#include "WeaponFactory.h"
#include "UZI.h"
#include "M16.h"
#include "Missile.h"

Item* WeaponFactory::getItem(const Point2d& location,
                    const std::string& item, double defenceRate){
    if(item.compare("M16") == 0){
        return new M16(location);
    }else if(item.compare("Missile") == 0){
        return new Missile(location);
    }else if(item.compare("UZI") == 0){
        return new UZI(location);
    }
    return nullptr;
}
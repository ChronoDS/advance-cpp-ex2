
#include "ArmorFactory.h"
#include "BodyArmor.h"
#include "ShieldArmor.h"

Item* ArmorFactory::getItem(const Point2d& location,
                    const std::string& item, double defenceRate){
    if(item.compare("BodyArmor")){
        return new BodyArmor(location, defenceRate);
    }else if(item.compare("ShieldArmor")){
        return new ShieldArmor(location, defenceRate);
    }
    return nullptr;
}
#include "BodyArmor.h"

BodyArmor::BodyArmor(const Point2d& location, double defenceRate): DefenceItem(location, defenceRate){}
BodyArmor::BodyArmor(double defenceRate): DefenceItem(defenceRate){}
BodyArmor::~BodyArmor(){}
DefenceType BodyArmor::getDefenceType(){
    return Body;
}
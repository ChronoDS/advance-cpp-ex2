#include "ShieldArmor.h"

ShieldArmor::ShieldArmor(const Point2d& location, double defenceRate): DefenceItem(location, defenceRate){}
ShieldArmor::ShieldArmor(double defenceRate): DefenceItem(defenceRate){}
ShieldArmor::~ShieldArmor(){}
DefenceType ShieldArmor::getDefenceType(){
    return Shield;
}
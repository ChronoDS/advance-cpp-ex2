#include "DefenceItem.h"

DefenceItem::DefenceItem(const Point2d& location, double defenceRate):
                            Item(location), defenceRate(defenceRate){}
DefenceItem::DefenceItem(double defenceRate): defenceRate(defenceRate){}
DefenceItem::~DefenceItem(){}
double DefenceItem::getDefenceRate(){
    return defenceRate;
}
bool DefenceItem::checkItem(const Item* other){           // if mine is better return true
    return this->getDefenceRate() <= ((DefenceItem*)other)->getDefenceRate();
}
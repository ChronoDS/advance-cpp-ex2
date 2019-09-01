#ifndef DEFENCE_ITEM_H
#define DEFENCE_ITEM_H

#include "CollectableItem.h"

enum DefenceType {Body, Shield};

class DefenceItem: public Item, public CollectableItem{
    double defenceRate;

    public:
    DefenceItem(const Point2d& location, double defenceRate);
    DefenceItem(double defenceRate);
    virtual ~DefenceItem();
    double getDefenceRate();
    bool checkItem(const Item* other);
    virtual DefenceType getDefenceType()=0;
};

#endif

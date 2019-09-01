#ifndef UNIT_FIELD_H
#define UNIT_FIELD_H

#include "Point2d.h"
#include "Soldier.h"
#include "Item.h"
#include <list>

class UnitField{
    std::list<Soldier*> soldiers;
    std::list<Item*> items;
    bool isAvailable;
    
    public:
    UnitField();
    ~UnitField();
    list<Soldiers*> getSoldiers();
    list<Item*> getItems();
    void removeSoldier(const Soldier* soldier);
    void addSoldier(const Soldier* soldier);
    void removeItem(const Item* item);
    void addItem(const Item* item);
    bool isAvailable();
    bool setIsAvailable(bool state);
    bool isEmptyFromSoldiers();
    bool isEmptyFromItems();
};

#endif
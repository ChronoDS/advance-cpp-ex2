
#include "UnitField.h"

UnitField::UnitField(): isAvailable(true){}
UnitField::~UnitField(){
    for(auto i = soldiers.begin(); i != soldiers.end(); ++i)
        delete (*i);
    for(auto i = items.begin(); i != items.end(); ++i)
        delete (*i);
}

list<Soldiers*> UnitField::getSoldiers(){
    return soldiers;
}
list<Item*> UnitField::UngetItems(){
    return items;
}
void UnitField::removeSoldier(const Soldier* soldier){
    soldiers.remove(soldier);
}
void UnitField::addSoldier(const Soldier* soldier){
    soldiers.push_back(soldier);
}
void UnitField::removeItem(const Item* item){
    items.remove(item);
}
void UnitField::addItem(const Item* item){
    items.push_back(item);
}
bool UnitField::isAvailable() { return isAvailable; }
bool UnitField::setIsAvailable(bool state) { isAvailable = state; }
bool UnitField::isEmptyFromSoldiers() { return soldiers.empty(); }
bool UnitField::isEmptyFromItems() { return items.empty();}

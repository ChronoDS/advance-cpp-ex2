#ifndef WEAPON_H
#define WEAPON_H

#include "CollectableItem.h"

enum WeaponType {Heavy, Light};

class Weapon: public CollectableItem, public Item{
    int damage;
    int bulletsPerTurn;
    
    public:
        Weapon(const Point2d& location, int damage, int bulletsPerTurn);
        Weapon(int damage, int bulletsPerTurn);
        virtual ~Weapon();
        bool checkItem(const Item* other);
        int getDamage();
        int getBulletsPerTurn();
        int getTotalDamage();
        virtual WeaponType getWeaponType()=0;
        
};

#endif
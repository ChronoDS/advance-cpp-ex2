/** 
 * Interface that check which weapon grants more damage.
 * Implemented as kind of visitor pattern.
*/
#ifndef COLLECTABLE_ITEM_H
#define COLLECTABLE_ITEM_H

#include "Item.h"

class CollectableItem{  
    public:
        virtual bool checkItem(const Item* other)=0;              // Return true if current weapon is better
};

#endif
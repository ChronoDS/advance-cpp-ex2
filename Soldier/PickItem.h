#ifndef PICKITEM_H
#define PICKITEM_H

#include "Item.h"

class PickItem{
    public:
        virtual void pick(const Item* other)=0;  
};
#endif
/**
 *  Base factory design pattern 
 */

#ifndef ITEM_FACTORY_H
#define ITEM_FACTORY_H

#include "Item.h"
#include <string>

class ItemFactory{
  public:
    /**
     * location and defenceRate are optional.
     */
    virtual Item* getItem(const Point2d& location = NULL,
                                const std::string& item, double defenceRate)=0;
};

#endif
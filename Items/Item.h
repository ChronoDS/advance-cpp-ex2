#ifndef ITEM_H
#define ITEM_H

#include "Point2d.h"
#include <iostream>

class Item{
  Point2d location;
  public:
    Item(double x = -1, double y = -1);
    Item(const Point2d& location);
    virtual ~Item();
    const Point2d& getLocation();
    void setLocation(const Point2d& newLocation);
};

#endif
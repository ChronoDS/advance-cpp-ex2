#ifndef STATIC_ITEM_H
#define STATIC_ITEM_H

#include "Item.h"

class StaticItem{
  double width;
  double length;
  public:
    StaticItem(double x, double y, double width = 2, double length = 2);
    StaticItem(Point2d p);
    ~StaticItem();
};

#endif
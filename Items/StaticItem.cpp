#include "StaticItem.h"

StaticItem::StaticItem(double x, double y, double width = 2, double length = 2): Item(x, y)
                            , width(width), length(length){}
StaticItem::StaticItem(Point2d p): Item(p.getX(), p.getY()){}
StaticItem::~StaticItem(){}
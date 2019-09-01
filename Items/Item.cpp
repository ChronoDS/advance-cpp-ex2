#include "Item.h"

Item::Item(double x, double y): location(x, y){}
Item::Item(const Point2d& location):location(location){}
Item::~Item(){}
const Point2d& Item::getLocation(){
    return location;
}
void Item::setLocation(const Point2d& newLocation){
    location.movePoint(newLocation);
}


#include "Point2d.h"
#include <cmath>
#include <iostream>

Point2d::Point2d(){}
Point2d::Point2d(double x, double y): x(x), y(y){}
Point2d::Point2d(const Point2d& other): x(other.x), y(other.y){}
Point2d::~Point2d(){}
std::string Point2d::toString(){
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
void Point2d::movePoint(double x1, double y1){
    x = x1;
    y = y1;
}
void Point2d::movePoint(const Point2d& other){
    x = other.getX();
    y = other.getY();
}
double Point2d::getX() const{
    return x;
}
double Point2d::getY() const{
    return y;
}
bool Point2d::equals(const Point2d& other){
    return this->x == other.getX() && this->y == other.getY();
}
Point2d Point2d::normalVector(const Point2d& p2){
    if(!this->equals(p2)){
        double dx = p2.getX() - this->x;
        double dy = p2.getY() - this->y;
        double normal = sqrt(pow(dx, 2) + pow(dy, 2));
        return Point2d((dx / normal), (dy / normal));
    }else{
        return *this;
    }
}
double Point2d::distance(Point2d& p2){
    return sqrt(pow(this->x-p2.getX(), 2) + pow(this->y-p2.getY(), 2));
}
/**
 *
 * returns point on vector by distance
 */
Point2d Point2d::getPointFromPointAndDistance(const Point2d& p2, double distance){
    Point2d v = this->normalVector(p2);
    Point2d ans = (*this) + v.multiplyVectorAndScalar(distance);
    return ans;
}
Point2d Point2d::multiplyVectorAndScalar(double scalar){
    return Point2d(this->x * scalar, this->y * scalar);
}

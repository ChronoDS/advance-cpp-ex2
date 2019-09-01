#include "Strategy.h"
#include <cstdlib>
#include <ctime>
 
Strategy::Strategy(double x, double y, double range): maxX(x), maxY(y), maxRange(range){}
Strategy::~Strategy(){}
Point2d& Strategy::getRandomPointToMove(){
    double factorX, factorY;            // controls negative numbers
    double x, y;
    x = std::srand(std::time(nullptr)) * maxX; // use current time as seed for random generator
    y = std::srand(std::time(nullptr)) * maxY;
    factorX = std::srand(std::time(nullptr));
    factorY = std::srand(std::time(nullptr));
    
    if(factorX < 0.5)
        factorX *= -1;
    if(factorY < 0.5)
        factorY *= -1;
    
    x *= factorX;
    y *= factorY;
    return Point2d(x,y);
}
const Point2d& getMaxRange(){
    return Point2d(0, maxRange);
}

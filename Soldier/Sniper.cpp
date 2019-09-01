
#include "Sniper.h"

Sniper::Sniper(const Point2d& location, Color color, const Weapon* weapon): 
                Soldier(location, 80, 2, color, weapon){}
Sniper::~Sniper(){}

const Point2d& Sniper::getPointDirectionToMove(const Point2d& direction){
    double location = getLocation();
    double distance = location.distance(direction);
    if(getHP() < 30){
        setMovmentSpeed(1);
        return getPointFromPointAndDistance(direction, movementSpeed);
    }
}

void Sniper::fillHealth(){
    setHP(80);
    setMovmentSpeed(2);
}
double Sniper::hitChance(double distance){
    return (d - 1)/d;
}


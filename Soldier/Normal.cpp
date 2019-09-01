
#include "Normal.h"

Normal::Normal(const Point2d& location, Color color, const Weapon* weapon): 
                Soldier(location, 100, 2, color, weapon){}
Normal::~Normal(){}

const Point2d& Normal::getPointDirectionToMove(const Point2d& direction){
    double location = getLocation();
    double distance = location.distance(direction);
    if(getHP() < 30){
        setMovmentSpeed(1);
        return getPointFromPointAndDistance(direction, movementSpeed);
    }else{
        if(distance > movementSpeed * 4){
            setHP(getHp() - 10);
            return getPointFromPointAndDistance(direction, movementSpeed * 4);
        }else{
            return getPointFromPointAndDistance(direction, movementSpeed);
        }
    }
}

void Normal::fillHealth(){
    setHP(100);
    setMovmentSpeed(2);
}
double Normal::hitChance(double distance){
    return 1 / distance;
}
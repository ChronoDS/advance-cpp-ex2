
#include "Paramedic.h"

Paramedic::Paramedic(const Point2d& location, Color color, const Weapon* weapon): 
                Soldier(location, 120, 4, color, weapon){}
Paramedic::~Paramedic(){}

const Point2d& Paramedic::getPointDirectionToMove(const Point2d& direction){
    double location = getLocation();
    double distance = location.distance(direction);
    if(getHP() < 30){
        setMovmentSpeed(2);
    }    
    return getPointFromPointAndDistance(direction, movementSpeed);
    
}

void Paramedic::fillHealth(){
    setHP(120);
    setMovmentSpeed(4);
}
double Paramedic::hitChance(double distance){
    return 1;
}
void heal(const Soldier* soldierToHeal){
    soldierToHeal->fillHealth();
}

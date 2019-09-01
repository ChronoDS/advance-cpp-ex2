#ifndef PARAMEDIC_H
#define PARAMEDIC_H

#include "Soldier.h"

class Paramedic: public Soldier{
    public:
      Paramedic(const Point2d& location, Color color, const Weapon* weapon = nullptr);
      ~Paramedic();
      const Point2d& getPointDirectionToMove(const Point2d& direction);
      void fillHealth();
      double hitChance(double distance);
      void heal(const Soldier* soldierToHeal);
};

#endif
#ifndef SNIPER_H
#define SNIPER_H

#include "Soldier.h"

class Sniper: public Soldier{
    public:
      Sniper(const Point2d& location, Color color, const Weapon* weapon);
      ~Sniper();
      const Point2d& getPointDirectionToMove(const Point2d& direction);
      void fillHealth();
      double hitChance(double distance);
};

#endif
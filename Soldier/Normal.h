#ifndef NORMAL_H
#define NORMAL_H

#include "Soldier.h"

class Normal: public Soldier{
    public:
      Normal(const Point2d& location, Color color, const Weapon* weapon);
      ~Normal();
      const Point2d& getPointDirectionToMove(const Point2d& direction);
      void fillHealth();
      double hitChance(double distance);
};

#endif
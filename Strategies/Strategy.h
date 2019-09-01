#ifndef STRATEGY_H
#define STRATEGY_H

#include "Point2d.h"

class Strategy{
  double maxX;
  double maxY;
  double maxRange;
  public:   
    Strategy(double x, double y, double range);
    virtual ~Strategy();
    Point2d getRandomPointToMove();
    virtual const Point2d& getMaxRange();
};

#endif
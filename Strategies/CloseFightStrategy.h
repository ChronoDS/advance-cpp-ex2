#ifndef CLOSE_FIGHT_STRATEGY_H
#define CLOSE_FIGHT_STRATEGY_H

#include "Strategy.h"

class CloseFightStrategy: public Strategy{

  public:   
    CloseFightStrategy(double x, double y);
    ~CloseFightStrategy();
};

#endif
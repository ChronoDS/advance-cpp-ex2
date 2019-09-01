#ifndef GAME_H
#define GAME_H

#include <list>
#include "StaticItem.h"
#include "Player.h"

class Game: public StaticItem, public Player{
    
    // no minus value, as well as no out of boundries.
    // if input is accuppied, give a second chance and if out of boundries, go till boundries.  
    // if there is troop or static item, its not possible to go there.
    // hence for item you will go till item -0.01, for troop or boundries you will go half way.
    
    std::list <StaticItem*> staticItemsList;
    
protected:
    // traversing two lists by iterators, static items and enemy soldier's lists. location search.
    void move(double x, double y);
    
    // checks if the point is clear of static items.
    bool isClearStatic(double x, double y);
    
    // check if the point is clear of troops(enemy or mine..).
    bool isClearTroops(double x, double y);
    
    // reads from file and suggest movement to soldier. receives reaction(point) from soldier,
    // then checks this point for obstacles(troops/static items) and moves soldier there if clear.
    // FOR NOW - if not clear as second test, leaves soldier at current origin point. 
    void SuggestMovementVector(); 
    
    
    
};
#endif

#include "Game.h"

void Game::move(const Point2d& p){
    bool isclearofStatic = isClearStatic(p);
    if (!isclearofStatic) return;// failed to move.
    bool isclearofTroops = isClearTroops(p);
    if(!isclearofTroops) return;// failed to move.
    
    std::list<Soldier> temp // TEMPORARY EXAMPLE to be deleted when soldier list is made, and update iterator.
    
    if(isclearofStatic && isclearofTroops){
        // finds in list, then changes location.
        for(std::list<Soldier> iterator it = temp.begin(); it != temp.end(); ++it){
            if(it == /* HOW do i know i found the troop */){
                it.location = p;
                return;
            }
        }
    }
}
/**
 * M: here you need to check if line cross static object borders.
 *       ________
 *       |       |
 *      --->     |
 *       |_______|
 *      this is not same point but still not allowed.
 *       don't forget to use the equals method.
 */ 
// returns true if no obstacle is in the way, else false.
bool Game::isClearStatic(const Point2d& p){
    for(std::list<Item> iterator it = staticItemsList.begin(); it != temp.end(); ++it){
        if(it.point.x == p.x && it.point.y == p.y){
            return false;
        }
    }
    return true;
}

/**
 * M: you need to iterate over all armies, not only one.
 * to simplify the iterator object getter, you can use auto keyword
 * std::list<Soldier> == auto(it works in compilation time so when it's obviuse it should work).
 */

// returns true if no soldier is in the spot, else false.
bool Game::isClearTroops(const Point2d& p){
    for(auto iterator it = temp.begin(); it != temp.end(); ++it){
        if(it.point.x == p.x && it.point.y == p.y){
            return false;
        }
    }
    return true;
}


    // reads from file and suggest movement to soldier. receives reaction(point) from soldier,
    // then checks this point for obstacles(troops/static items) and moves soldier there if clear.
    // FOR NOW - if not clear as second test, leaves soldier at current origin point.
void Game::SuggestMovementVector(){
    
    /* part that reads points from CSV to move soldier to.
    TODO
    */
    
    // FOR NOW - initializing just a dummy value received back from troop, where he can move.
    Point2d PlayersResponsePoint = new Point2d(2,4);
    
    
    // parts that receives new point to where soldier can arrive, then try to send him there
    move(PlayersResponsePoint);
    
}
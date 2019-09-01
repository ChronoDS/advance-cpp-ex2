#ifndef MAP_H
#define MAP_H

#define DEFAULT_SIZE 100

#include "UnitField.h"

class Map{
    int borderX, borderY;
    UnitField map[DEFAULT_SIZE][DEFAULT_SIZE];
    
    public:
        Map(int x = DEFAULT_SIZE, int y = DEFAULT_SIZE);
        ~Map();
        const UnitField& getUnitField(int x, int y);
};

#endif
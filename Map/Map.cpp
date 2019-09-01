
#include "Map.h"

Map::Map(int x, int y): borderX(x), borderY(y){
    map[borderX][borderY];    
}
Map::~Map(){}
const UnitField& Map::getUnitField(int x, int y){
    return map[x][y];
}
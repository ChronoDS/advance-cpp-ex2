
/**
 * M: dont mind this nonsense... 
 */
#include <algorithm>
#include <iostream>


#include <list>
using namespace std;
#include "a.h"

enum Color {RED, BLUE, GREEN, BROWN};
int main ()
{
  int x = 2, y = 2;
  a b(x, y);
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      std::cout << b.b[i][j] << std::endl;
    }
  }
  Color c = BLUE;
  std::cout << c << std::endl;
  return 0;
}
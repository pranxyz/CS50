#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric
{
private:
   int f(int x);
public:
   virtual vector<int> map(vector<int> vec) = 0;
};
#endif

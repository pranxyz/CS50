#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <vector>

class MapSquare : public MapGeneric
{
private:
   int f(int x);
public:
   void map(vector<int> *v, int i);
   vector<int> map(vector<int> vec);
};

#endif
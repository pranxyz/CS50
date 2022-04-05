#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include <vector>

class MapTriple : public MapGeneric
{
private:
   int f(int x);

public:
   void map(vector<int> *v, int i);
   vector<int> map(vector<int> vec);
};
#endif
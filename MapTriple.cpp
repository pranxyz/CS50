#include <iostream>
#include <vector>
#include "MapGeneric.h"  
#include "MapTriple.h"
using namespace std;

int MapTriple::f(int x)
{
    return 3*x;
}

void MapTriple::map(vector<int> *v, int i)
{
    if (i <(*v).size())
    {
        int value = f((*v)[i]);
        (*v)[i] = value;
        i = i + 1;
        map(v, i);
    }
}

vector<int> MapTriple::map(vector<int> vec)
{
   vector<int> v;
   v = vec;
   map(&v, 0);
   return v;
}
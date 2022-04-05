#include <iostream>
#include <vector>
#include "MapGeneric.h"  
#include "MapSquare.h"
using namespace std;

int MapSquare::f(int x)
{
   return x*x;
}

void MapSquare::map(vector<int> *v, int i)
{
    if (i <(*v).size())
    {
        int value = f((*v)[i]);
        (*v)[i] = value;
        i = i + 1;
        map(v, i);
    }
}

vector<int> MapSquare::map(vector<int> vec)
{
    vector<int> v;
    v = vec;
    map(&v, 0);
    return v;
}
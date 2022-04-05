#include <iostream>
#include <vector>
#include "FilterGeneric.h"  
#include "FilterOdd.h"
using namespace std;

bool FilterOdd::g(int x)
{
   return (x % 2) != 0;
}

void FilterOdd::filter(vector<int> vec, int i, vector<int> *v)
{
    if (i < (vec).size())
    {
        bool oddFlag = g((vec)[i]);
        if (oddFlag)
            (*v).push_back((vec)[i]);
        i = i + 1;
        filter(vec, i, v);
   }
}

vector<int> FilterOdd::filter(vector<int> vec)
{
    vector<int> v;      
    int i = 0;
    filter(vec, i, &v);
    return v;
}
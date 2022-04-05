#include <iostream>
#include <vector>
#include <cmath>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
using namespace std;

int MapAbsoluteValue::f(int x)
{
    if (x < 0)
    return -1 * x;
    return x;
}

void MapAbsoluteValue::map(vector<int> *v, int i)
{
    if (i <(*v).size())
    {
    int value = f((*v)[i]);
    (*v)[i] = value;
    i = i + 1;
    map(v, i);
    }
}

vector<int> MapAbsoluteValue map(vector<int> vec)
{
    vector<int> v;
    v = vec;
    map(&v, 0);
    return v;
}
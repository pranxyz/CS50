#include <iostream>
#include <vector>
#include "FilterGeneric.h"  
#include "FilterNonPositive.h"
using namespace std;


bool FilterNonPositive::g(int x)
{
       return x < 0;
}
   
void FilterNonPositive::filter(vector<int> vec, int i, vector<int> *v)
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
   
vector<int> FilterNonPositive::filter(vector<int> vec)
   {
       vector<int> v;
       int i = 0;
       filter(vec, i, &v);
       return v;
   }
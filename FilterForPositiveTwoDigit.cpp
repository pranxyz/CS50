#include <iostream>
#include <vector>
#include "FilterGeneric.h"   
#include "FilterForPositiveTwoDigit.h"
using namespace std;

   bool FilterForPositiveTwoDigit::g(int x)
   {
       if ((x > 9 && x < 100) && x != -x)
           return true;

       else
           return false;
   }
   
      void FilterForPositiveTwoDigit::filter(vector<int> vec, int i, vector<int> *v)
   {
       if (i < (vec).size())
       {
           bool twoDigitPosFlag = g((vec)[i]);
           if (twoDigitPosFlag)
               (*v).push_back((vec)[i]);
           i = i + 1;
           filter(vec, i, v);
       }
   }
   
     vector<int> FilterForPositiveTwoDigit::filter(vector<int> vec)
   {
       vector<int> v;
       int i = 0;
       filter(vec, i, &v);
       return v;
   }
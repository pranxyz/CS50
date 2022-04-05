#include <iostream>
#include <vector>
#include <stdio.h>  
#include <algorithm>
#include <sstream>   
using namespace std;
#include "MapGeneric.cpp"
#include "MapTriple.cpp"
#include "MapAbsoluteValue.cpp"
#include "MapSquare.cpp"
#include "FilterGeneric.cpp"
#include "FilterEven.cpp"
#include "FilterPositive.cpp"
#include "FilterPositiveTwoDigit.cpp"
#include "ReduceGeneric.cpp"
#include "ReduceMinimum.cpp"
#include "ReduceGCD.cpp"

int main()
{
   vector<int> L,L1,L2;
   int i;
   string line;
getline(cin,line);
   if(line.size() == 0)
       return 0;

line.erase(remove(line.begin(), line.end(), ','), line.end());
istringstream s(line);
while(s>>i)
{
     L.push_back(i);
}
   if(L.size() != 20)
           return 0;  

   MapTriple triple;   MapAbsoluteValue abs;
   L1 = triple.map(abs.map(L));

   FilterEven even; FilterPositiveTwoDigit p2;
  
   L2 = p2.filter(L1);
   if(L2.size() <2)
           return 0;

   L2 = even.filter(L2);
   if(L2.size() <2)
           return 0;  
           
   ReduceMinimum min; ReduceGCD gcd;
   printf("%d %d\n",min.reduce(L2),gcd.reduce(L2));

  
}
#include <iostream>
#include <deque>
#include <stdio.h>   //scanf,printf
#include <algorithm>
#include <sstream>    //istringstream
using namespace std;
//maps
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
//filters
#include "FilterGeneric.h"
#include "filterEven.h"
#include "filterPositive.h"
#include "filterPositiveTwoDigit.h"
//reduce
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

int main()
{
   deque<int> L,L1,L2;
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

   //converting L -> 3*|L| aka L1
   MapTriple triple;   MapAbsoluteValue abs;
   L1 = triple.map(abs.map(L));

   //converting L1 -> positive two digit integers -> even intergers aka L2
   filterEven even; filterPositiveTwoDigit p2;
  
   L2 = p2.filter(L1);
   if(L2.size() <2)
           return 0;

   L2 = even.filter(L2);
   if(L2.size() <2)
           return 0;  

   //finding the minimum and GCD from L2 respectively
   ReduceMinimum min; ReduceGCD gcd;
   printf("%d %d\n",min.reduce(L2),gcd.reduce(L2));

  
}


FilterGeneric.cpp

#include <iostream>
#include <deque>

#include "FilterGeneric.h"

using namespace std;


deque<int> FilterGeneric::filter(deque<int> deq)
{
   //calling recursive function with deq and its length
   select(deq,deq.size()-1);
   return filterDeq;
}

//int i is the index that will start from the length of deque till 0
void FilterGeneric::select(deque<int> deq, int i)
{
   if(i == 0)
   {
       bool val = f(deq[i]);
       if(val)
           filterDeq.push_front(deq[i]);

       return;
   }

   bool val = f(deq[i]);
   if(val)
       filterDeq.push_front(deq[i]);

   return select(deq,i-1);
}

FilterGeneric.h

#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <deque>

class FilterGeneric
{

public:

std::deque<int> filter(std::deque<int>);

   void select(std::deque<int>,int);

protected:

   //this deque will store the integers after filtration.
   std::deque<int> filterDeq;      

private:
  
   virtual bool f(int)=0;

};
#endif


MapAbsoluteValue.cpp

#include <iostream>
#include <deque>
#include <cmath>

#include "MapGeneric.h"   //base
#include "MapAbsoluteValue.h"
using namespace std;

int MapAbsoluteValue::f(int num)
{
   return abs(num);
}


MapAbsoluteValue.h

#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include <deque>

//this class will map a given input N, using the function map(input), to |N|
class MapAbsoluteValue: public MapGeneric
{

public:

   //overwriting pure virtual function making N -> |N|
   int f(int);

private:

};
#endif

MapGeneric.cpp

#include <iostream>
#include <deque>

#include "MapGeneric.h"

using namespace std;


deque<int> MapGeneric::map(deque<int> deq)
{
   //calling recursive function with deq and its length
   calculate(deq,deq.size()-1);
   return mapDeq;
}

//int i is the index that will start from the length of deque till 0
void MapGeneric::calculate(deque<int> deq, int i)
{
   if(i == 0)
   {
       int val = f(deq[i]);
       mapDeq.push_front(val);
       return;
   }
  
   int val = f(deq[i]);
   mapDeq.push_front(val);
   return calculate(deq,i-1);
}

MapGeneric.h

#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <deque>

class MapGeneric
{

public:
std::deque<int> map(std::deque<int>);

   void calculate(std::deque<int>,int);

protected:

   //this deque will store the values in key-values pairs after transformation.
   std::deque<int> mapDeq;      

private:
   virtual int f(int)=0;

};
#endif


MapSquare.cpp

#include <iostream>
#include <deque>

#include "MapGeneric.h"   //base
#include "MapSquare.h"
using namespace std;

int MapSquare::f(int num)
{
   return num*num;
}


MapSquare.h

#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <deque>

//this class will map a given input N, using the function map(input), to N^2
class MapSquare: public MapGeneric
{

public:
  
   //overwriting pure virtual function making N -> N^2
   int f(int);
};
#endif


MapTriple.cpp

#include <iostream>
#include <deque>

#include "MapGeneric.h"  
#include "MapTriple.h"
using namespace std;

int MapTriple::f(int num)
{
   return num*3;
}

MapTriple.h

#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include <deque>

//this class will map a given input N, using the function map(input), to 3 N
class MapTriple: public MapGeneric
{

public:
   //overwriting pure virtual function making N -> 3N
   int f(int);
};
#endif


ReduceGCD.cpp

#include <iostream>
#include <deque>
using namespace std;

#include "ReduceGeneric.h"   //base
#include "ReduceGCD.h"


int ReduceGCD::binary_operator(int i, int j)
{
   int r = i%j;
   if(r == 0)
   {
       return j;
   }
   return binary_operator(j,r);
}


ReduceGCD.h

#ifndef REDUCEGCD_H
#define REDUCEGCD_H

//this class will reduce a given list of N inputs, using the function reduce(input), to calculate the greatest common divisor.
class ReduceGCD: public ReduceGeneric
{

public:
  
   //overwriting pure virtual function to calculate and return the GCD of the 2 inputs.
   int binary_operator(int,int);
};
#endif


ReduceGeneric.cpp
#include <iostream>
#include <deque>

#include "ReduceGeneric.h"

using namespace std;


int ReduceGeneric::reduce(deque<int> deq)
{

   //calling recursive function with deq and its length
   find(deq,deq.size()-1);
   return result;
}

//int i is the index that will start from the length of deque till 0
void ReduceGeneric::find(deque<int> deq, int i)
{
   if(i == 0)
   {
       //the value at index 0 is the final selected value.
       result = binary_operator(deq[1],deq[0]);
       return;
   }
  
   //overwriting the i-1 index with the selected value and continues to do so.
   deq[i-1] = binary_operator(deq[i],deq[i-1]);
   return find(deq,i-1);
}

ReduceGeneric.h

#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <deque>

class ReduceGeneric
{

public:
   int reduce(std::deque<int>);
   void find(std::deque<int>,int);

protected:

   //this will store the final integer after comparision finishes.
   int result;      

private:
   virtual int binary_operator(int,int)=0;

};
#endif


ReduceMinimum.cpp

#include <iostream>
#include <deque>
using namespace std;

#include "ReduceGeneric.h"   //base
#include "ReduceMinimum.h"


int ReduceMinimum::binary_operator(int i, int j)
{
   return (i<j)? i:j ;
}


ReduceMinimum.h

#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

//this class will reduce a given list of N inputs, using the function reduce(input), to select the minimum value.
class ReduceMinimum: public ReduceGeneric
{

public:
  
   //overwriting pure virtual function to return the minimum value out of the 2 inputs.
   int binary_operator(int,int);
};
#endif


filterEven.cpp
#include <iostream>
#include <deque>

#include "FilterGeneric.h"   //base
#include "filterEven.h"
using namespace std;

bool filterEven::f(int num)
{
   return (num%2 == 0);
}


filterEven.h

#ifndef FILTEREVEN_H
#define FILTEREVEN_H
#include <deque>

//this class will filter a given input N, using the function filter(input), to select only even N
class filterEven: public FilterGeneric
{

public:
  
   //overwriting pure virtual function to select only even N
   bool f(int);
};
#endif


filterPositive.cpp

#include <iostream>
#include <deque>

#include "FilterGeneric.h"   //base
#include "filterPositive.h"
using namespace std;

bool filterPositive::f(int num)
{
   return (num>0);
}


filterPositive.h

#ifndef FILTERPOSITIVE_H
#define FILTERPOSITIVE_H
#include <deque>

//this class will filter a given input N, using the function filter(input), to give N>0
class filterPositive: public FilterGeneric
{

public:
  
   //overwriting pure virtual function to select only N>0
   bool f(int);
};
#endif

filterPositiveTwoDigit.cpp

#include <iostream>
#include <deque>

#include "FilterGeneric.h"   //base
#include "filterPositiveTwoDigit.h"
using namespace std;

bool filterPositiveTwoDigit::f(int num)
{
   //do if positive digit
   if(num>0)
   {  
       //do if not 1 digit
       if((num/10)!=0)
       {
           //do if 2 digit
           if(((num/10)/10)== 0)
               return true;
       }
   }
   return false;
}


filterPositiveTwoDigit.h

#ifndef FILTERPOSITIVETWODIGIT_H
#define FILTERPOSITIVETWODIGIT_H
#include <deque>

//this class will filter a given input N, using the function filter(input), to give only N>0 and are of two digits
class filterPositiveTwoDigit: public FilterGeneric
{

public:
  
   //overwriting pure virtual function to select only N>0 and are of two digits
   bool f(int);
};
#endif


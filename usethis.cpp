Program Code to Copy:

// MapGeneric.h

#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <iostream>
#include <vector>
using namespace std;

/**
* MapGeneric class is a base class contains
* virtual function as public and a private function.
*/
class MapGeneric
{
private:
   // function f accepts an integer and returns an
   // integer
   int f(int x)
   {
       return x;
   }
public:
   // virtual function that accepts a vector of integers
   // and returns the mapped vector of integers as per
   // function f
   virtual vector<int> map(vector<int> vec) = 0;
};

/**
* MapSquare a sub class derived from MapGeneric
* This contains a private overridden function f
* that returns the square of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of square values of the
* orginal list.
*/
class MapSquare : public MapGeneric
{
private:
   // function f accepts an integer and returns a
   // square of the value
   int f(int x)
   {
       return x * x;
   }
public:

   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i. This modifies the list values and returns
   // the square of list
   void map(vector<int> *v, int i)
   {
       // if the condition is satisfied, then
       // do the following
       if (i <(*v).size())
       {
           // call the function f and
           // store the return value in value
           int value = f((*v)[i]);

           // set the d value in vector v
           // at position i
           (*v)[i] = value;

           // increment the i value
           i = i + 1;

           // call the function map by passing
           // the updated vector v and incremented
           // i value
           map(v, i);
       }
   }


   // function map() that accepts a vector and returns
   // a vector of list containing the square values
   // of vec
   vector<int> map(vector<int> vec)
   {
       // define a vector v
       vector<int> v;

       // copy the vec into v
       v = vec;

       // call the map() helper function
       map(&v, 0);

       // return v value
       return v;
   }
};

/**
* MapTriple a sub class derived from MapGeneric
* This contains a private overridden function f
* that returns the triple value of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of triple the values of the
* orginal list.
*/
class MapTriple : public MapGeneric
{
private:
   // function f accepts an integer and returns a
   // triple of the value of the x i.e., 3x
   int f(int x)
   {
       // multiply x with 3 and return the value
       return 3 * x;
   }

public:

   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i. This modifies the list values and returns
   // the triple the values of list
   void map(vector<int> *v, int i)
   {
       // if the condition is satisfied, then
       // do the following
       if (i <(*v).size())
       {
           // call the function f and
           // store the return value in value
           int value = f((*v)[i]);

           // set the d value in vector v
           // at position i
           (*v)[i] = value;

           // increment the i value
           i = i + 1;

           // call the function map by passing
           // the updated vector v and incremented
           // i value
           map(v, i);
       }
   }

   // function map() that accepts a vector and returns
   // a vector of list containing the triple values
   // of vec
   vector<int> map(vector<int> vec)
   {
       // define a vector v
       vector<int> v;

       // copy the vec into v
       v = vec;

       // call the map() helper function
       map(&v, 0);

       // return v value
       return v;
   }
};

/**
* MapAbsoluteValue a sub class derived from MapGeneric
* This contains a private overridden function f
* that returns the absolute value of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of absolute values of the
* orginal list.
*/
class MapAbsoluteValue : public MapGeneric
{
private:
   // function f accepts an integer and returns a
   // absolute value of the value x
   int f(int x)
   {
       // if the value of x is less than zero
       // the make the x value positive and return
       if (x < 0)
           return -1 * x;

       // otherwise return the x value
       return x;
   }

public:
   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i. This modifies the list values and returns
   // the absolute values of list
   void map(vector<int> *v, int i)
   {
       // if the condition is satisfied, then
       // do the following
       if (i <(*v).size())
       {
           // call the function f and
           // store the return value in value
           int value = f((*v)[i]);

           // set the d value in vector v
           // at position i
           (*v)[i] = value;

           // increment the i value
           i = i + 1;

           // call the function map by passing
           // the updated vector v and incremented
           // i value
           map(v, i);
       }
   }

   // function map() that accepts a vector and returns
   // a vector of list containing the absolute values
   // of vec
   vector<int> map(vector<int> vec)
   {
       // define a vector v
       vector<int> v;

       // copy the vec into v
       v = vec;

       // call the map() helper function
       map(&v, 0);

       // return v value
       return v;
   }
};

#endif

// FilterGeneric.h
#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <iostream>
#include <vector>
using namespace std;

/**
* FilterGeneric class is a base class contains
* virtual function as public and a private function.
*/

class FilterGeneric
{
private:
   // boolean function that accepts an integer and
   // returns a boolean value
   bool g(int value)
   {
       return 0;
   }

public:
   // virtual function to return the filtered
   // values of the vector vec depending on the
   // function g
   virtual vector<int> filter(vector<int> vec) = 0;
};

/**
* FilterOdd a sub class derived from FilterGeneric
* This contains a private overridden function g
* that returns the boolean value if the number is odd.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function filters all even value of vector list and
* returns a odd values of list.
*/
class FilterOdd : public FilterGeneric
{
private:
   // function g accepts an integer and returns a
   // boolean value
   bool g(int x)
   {
       // if the x is odd returns true
       // otherwise returns false
       return (x % 2) != 0;
   }

public:

   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i and a pointer vector. This modifies the
   // list values and returns the odd values list
   void filter(vector<int> vec, int i, vector<int> *v)
   {
       // check the condition if i is less than size of
       // vector vec
       if (i < (vec).size())
       {
           // call the function g by passing the vec[i]
           // and store the return value in oddFlag
           bool oddFlag = g((vec)[i]);

           // if oddFlag is true, then push the value at
           // index i of vec into vector v
           if (oddFlag)
               (*v).push_back((vec)[i]);

           // increment i value
           i = i + 1;

           // call the function filter() by passing
           // vec, i and v
           filter(vec, i, v);
       }
   }

   // function filter() that accepts a vector and returns
   // a vector of list containing the odd values
   // of vec
   vector<int> filter(vector<int> vec)
   {
       // define a vector v
       vector<int> v;      

       // set the value of i to 0
       int i = 0;

       // call the helper function by passing the
       // vec, i and reference of vector v
       filter(vec, i, &v);

       // return the v vector
       return v;
   }
};

/**
* FilterNonPositive a sub class derived from FilterGeneric
* This contains a private overridden function g
* that returns the triple value of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of triple the values of the
* orginal list.
*/
class FilterNonPositive : public FilterGeneric
{
private:
   // function g accepts an integer and returns a
   // boolean value if x is negative
   bool g(int x)
   {
       return x < 0;
   }

public:
   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i and pointer vector. This modifies the
   // list values and returns the negative values list.
   void filter(vector<int> vec, int i, vector<int> *v)
   {
       // check the condition if i is less than size of
       // vector vec
       if (i < (vec).size())
       {
           // call the function g by passing the vec[i]
           // and store the return value in oddFlag
           bool oddFlag = g((vec)[i]);

           // if oddFlag is true, then push the value at
           // index i of vec into vector v
           if (oddFlag)
               (*v).push_back((vec)[i]);

           // increment i value
           i = i + 1;

           // call the function filter() by passing
           // vec, i and v
           filter(vec, i, v);
       }
   }

   // function filter() that accepts a vector and returns
   // a vector of list containing the negative values
   // of vec
   vector<int> filter(vector<int> vec)
   {
       // define a vector v
       vector<int> v;

       // set the value of i to 0
       int i = 0;

       // call the helper function by passing the
       // vec, i and reference of vector v
       filter(vec, i, &v);

       // return the v vector
       return v;
   }
};

/**
* FilterForTwoDigitPositive a sub class derived from FilterGeneric
* This contains a private overridden function f
* that returns the triple value of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a new vector list of triple the values of the
* orginal list.
*/
class FilterForTwoDigitPositive : public FilterGeneric
{
private:
   // function f accepts an integer and returns a
   // boolean of the value if the given
   // number is a positive two digit number
   bool g(int x)
   {
       // condition to check whether the
       // x value is two digit and also non
       // negative value. If the condition
       // is satisfied return true
       if ((x > 9 && x < 100) && x != -x)
           return true;

       // otherwise return false
       else
           return false;
   }

public:
   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i and a pointer vector. This modifies the
   // list values and returns the two digit positive
   // values list
   void filter(vector<int> vec, int i, vector<int> *v)
   {
       // check the condition if i is less than size of
       // vector vec
       if (i < (vec).size())
       {
           // call the function g by passing the vec[i]
           // and store the return value in twoDigitPosFlag
           bool twoDigitPosFlag = g((vec)[i]);

           // if twoDigitPosFlag is true, then push the value at
           // index i of vec into vector v
           if (twoDigitPosFlag)
               (*v).push_back((vec)[i]);

           // increment i value
           i = i + 1;

           // call the function filter() by passing
           // vec, i and v
           filter(vec, i, v);
       }
   }

   // function filter() that accepts a vector and returns
   // a vector of list containing the two digit positive values
   // of vec
   vector<int> filter(vector<int> vec)
   {
       // define a vector v
       vector<int> v;

       // set the value of i to 0
       int i = 0;

       // call the helper function by passing the
       // vec, i and reference of vector v
       filter(vec, i, &v);

       // return the v vector
       return v;
   }
};

#endif


// ReduceGeneric.h
#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <vector>
using namespace std;
/**
* ReduceGeneric class is a base class contains
* virtual function as public and a private function.
*/
class ReduceGeneric
{
private:
   // integer function that accepts two integer values and
   // returns an integer value
   int binaryOperator(int x, int y)
   {
       return 0;
   }
public:
   // virtual function to return the reduces the
   // values of the vector vec depending on the
   // function binaryOperator
   virtual int reduce(vector<int> vec) = 0;
};

/**
* ReduceMinimum a sub class derived from ReduceGeneric
* This contains a private overridden function binaryOperator
* that returns the minimum value of two parameter values.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function maps all the given vector list and
* returns a minimum value of the list.
*/
class ReduceMinimum : public ReduceGeneric
{
private:
   // function binaryOperator accepts two integer values
   // and returns the minimum of two parameter values
   int binaryOperator(int x, int y)
   {
       if (x < y)
           return x;
       else
           return y;      
   }

public:
   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i and an integer pointer. This returns the
   // minimum value in the vector vec.
   void reduce(vector<int> vec, int i, int *min)
   {
       // condition to check if the i value is
       // less than size of the vec
       if (i < (vec).size())
       {
           // call the binaryOperator() function
           // by passing the *min and value at index
           // i of the vec and store the return value of
           // binaryOperator() in *min.          
           *min = binaryOperator(*min, vec[i]);

           // increment i value
           i = i + 1;

           // call reduce function by passing the
           // vector v, incremented i value and
           // min value
           reduce(vec, i, min);
       }
   }

   // function reduce() that accepts a vector and returns
   // minimum value of the list vec
   int reduce(vector<int> vec)
   {      
       // set the value at index 0 of vector
       // vec in minVal and i to 0
       int minVal = vec[0], i = 0;

       // call the helper function by passing
       // vec, i and reference of minVal value
       reduce(vec, i, &minVal);

       // return the d value
       return minVal;
   }
};

/**
* ReduceGCD a sub class derived from ReduceGeneric
* This contains a private overridden function binaryOperator
* that returns the triple value of the number.
* This also contains one recursive helper function
* and the definition of the virtual function.
* This function returns the gcd value of the
* vector list.
*/
class ReduceGCD : public ReduceGeneric
{
private:
   // function binaryOperator accepts an integer and returns a
   // gcd value of x and y
   int binaryOperator(int x, int y)
   {
       // if x is zero, then return y
       if (x == 0)
           return y;

       // otherwise make a recursive call of
       // binaryOperator
       return binaryOperator(y % x, x);
   }

public:
   // helper function, this is a recursive function
   // This function accepts a pointer vector list and an
   // integer i and integer pointer. This modifies the
   // list values and returns the gcd value of list
   void reduce(vector<int> vec, int i, int *gcdValue)
   {
       // condition to check if the i value is
       // less than size of the vec
       if (i < (vec).size())
       {
           // call the binaryOperator() function
           // by passing the *gcdValue and value at index
           // i of the vec and store the return value of
           // binaryOperator() in *gcdValue.          
           *gcdValue = binaryOperator(*gcdValue, vec[i]);

           // increment i value
           i = i + 1;

           // call reduce function by passing the
           // vector vec, incremented i value and
           // gcdValue value
           reduce(vec, i, gcdValue);
       }
   }

   // function reduce() that accepts a vector and returns
   // minimum value of the list vec
   int reduce(vector<int> vec)
   {
       // set the value at index 0 of vector
       // vec in gcd and i to 0
       int gcd = vec[0], i = 0;

       // call the helper function by passing
       // vec, i and reference of gcd value
       reduce(vec, i, &gcd);

       // return the d value
       return gcd;
   }
};

#endif


// Map_Filter_Reduce.cpp
#include "stdafx.h" // Used in visual studio
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

// include all the header files of
// map, filter, and reduce classes
#include "MapGeneric.h"
#include "FilterGeneric.h"
#include "ReduceGeneric .h"

using namespace std;

// function to display the vector values
void displayList(vector<int> vecValues)
{
   for (int i = 0; i < vecValues.size(); ++i)
   {
       cout << vecValues[i] << " ";
   }
   cout << endl << endl;
}

// function to test the random sample values
// by displaying the values at each function call of the
// respective classes as per the steps specified in the
// question
void testCaseWithRandomSampleList(vector<int> list_L, int size)
{
   // to display the original random list
   cout << "The list of "<< size <<" integers are: " << endl;
   displayList(list_L);

   // define the object of MapAbsoluteValue class
   MapAbsoluteValue mapAbs;

   // call the map function by using MapAbsoluteValue object
   // and store the return vector in list_L again
   list_L = mapAbs.map(list_L);

   // display the list after mapping, to make the student
   // understand
   cout << "List of integers after applying absolute: " << endl;
   displayList(list_L);

   // define the object of MapTriple class
   MapTriple mapTriple;

   // call the map function by using MapTriple object
   // and store the return vector in list_L again
   list_L = mapTriple.map(list_L);

   // display the list after mapping, to make the student
   // understand
   cout << "List of integers after applying triple map: " << endl;
   displayList(list_L);

   // define the object of FilterForTwoDigitPositive class
   FilterForTwoDigitPositive filTwoDigit;

   // call the filter function by using FilterForTwoDigitPositive object
   // and store the return vector in list_L again
   list_L = filTwoDigit.filter(list_L);

   // display the list after filtering, to make the student
   // understand
   cout << "List of integers with two digit values: " << endl;
   displayList(list_L);

   // define the object of FilterOdd class
   FilterOdd filtOdd;

   // call the filter function by using FilterOdd object
   // and store the return vector in list_L again
   list_L = filtOdd.filter(list_L);

   // display the list after filtering, to make the student
   // understand
   cout << "List of integers that are odd from existing list: " << endl;
   displayList(list_L);


   // define the object of ReduceMinimum class
   ReduceMinimum redMin;

   // call the reduce function by using ReduceMinimum object
   // and store the return integer variable minValue
   int minValue = redMin.reduce(list_L);

   // display the minimum value of the final existing list
   cout << "The minimum value in the list is: " << minValue << endl << endl;

   // define the object of ReduceGCD class
   ReduceGCD redGCD;

   // call the reduce function by using ReduceGCD object
   // and store the return integer variable gcdValue
   int gcdValue = redGCD.reduce(list_L);
   cout << "The gcd value of the list is: " << gcdValue << endl << endl;
}

// function to test the all the sample cases provided in the question
void values_of_RequestedSampleList(vector<int> list_L, int length)
{  
   // display the length and original list
   cout << "The list of "<<length<<" sample integers are: " << endl;
   displayList(list_L);

   // define the object of MapAbsoluteValue class
   MapAbsoluteValue mapAbs;

   // apply mapping by using MapAbsoluteValue class object to get
   // the absolute list
   list_L = mapAbs.map(list_L);

   // define the object of MapTriple class
   MapTriple mapTriple;

   // apply mapping by using MapTriple class object to map the
   // values to get the triple the values list
   list_L = mapTriple.map(list_L);

   // define the object of FilterForTwoDigitPositive class
   FilterForTwoDigitPositive filTwoDigit;

   // apply filter by using FilterForTwoDigitPositive object to filter
   // out the even values and get the two digit values from the list
   list_L = filTwoDigit.filter(list_L);

   // define the object of FilterOdd class
   FilterOdd filtOdd;

   // apply filter to filter the even values and get the odd values
   // list
   list_L = filtOdd.filter(list_L);

   // define the object of ReduceMinimum class
   ReduceMinimum redMin;

   // reduce the list to get the minimum value from the existing
   // list
   int minValue = redMin.reduce(list_L);

   // define the object of MapAbsoluteValue class
   ReduceGCD redGCD;

   // reduce the list list_L to get the gcd value from the
   // existing list
   int gcdValue = redGCD.reduce(list_L);

   // display the output as minValue space gcdValue
   cout << "Output: " << minValue <<" "<< gcdValue << endl << endl;
}

// main function
int main()
{
   // set the srand value
   srand(time(0));

   // define a vector called list_L
   vector<int> list_L;

   // define the max and min range values
   int maxRange = 300, minRange = -100;
   size_t size = 20;
   // generate 20 random integers
   for (int i = 0; i < size; i++)
   {
       // get the random value between the
       // 300 and -100
       int randValue = rand() % maxRange + minRange;

       // set the random value into list_L
       list_L.push_back(randValue);
   }

   // call the testCaseWithRandomSampleList() function
   // to show the student what is being happened in the flow of
   // map, filter and reduce functions
   testCaseWithRandomSampleList(list_L, size);

   cout << "========================================================================"
       << endl << endl;

   // test case 1:
   cout << "Sample Test 1:" << endl;

   // define the list
   int array1[] = { 6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21,
                     -145, -99, 199, -156, -186, 43, -189 };

   // clear the vector
   list_L.clear();

   // get the size of the array1
   size = (sizeof(array1) / sizeof(*array1));

   // set the array1 values into vector list_L
   for (int i = 0; i < size; i++)
   {
       list_L.push_back(array1[i]);
   }

   // call the function values_of_RequestedSampleList() to display the
   // original list and, minimum value and gcd value from the finally
   // modified list
   values_of_RequestedSampleList(list_L, 20);

   cout << "========================================================================"
       << endl << endl;

   // test case 2:
   cout << "Sample Test 2:" << endl;

   // define the list
   int array2[] = { 18, 33, 159, 48, 219, 384, 315, 312, 213, 537, 306, 36,
                     63, 435, 297, 597, 468, 558, 129, 567 };

   // clear list_L vector
   list_L.clear();

   // get the size of the array2
   size = (sizeof(array2) / sizeof(*array2));

   // set the array2 values into vector list_L
   for (int i = 0; i < size; i++)
   {
       list_L.push_back(array2[i]);
   }

   // call the function values_of_RequestedSampleList() to display the
   // original list and, minimum value and gcd value from the finally
   // modified list
   values_of_RequestedSampleList(list_L, size);

   cout << "========================================================================"
       << endl << endl;

   // test case 3:
   cout << "Sample Test 3:" << endl;

   // define the list
   int array3[] = { 33, 63 };

   // clear list_L vector
   list_L.clear();

   // get the size of the array3
   size = (sizeof(array3) / sizeof(*array3));

   // set the array3 values into vector list_L
   for (int i = 0; i < size; i++)
   {
       list_L.push_back(array3[i]);
   }

   // call the function values_of_RequestedSampleList() to display the
   // original list and, minimum value and gcd value from the finally
   // modified list
   values_of_RequestedSampleList(list_L, 2);


   cout << "========================================================================"
       << endl << endl;

   // test case 4:
   cout << "Sample Test 4:" << endl;

   // define the list
   int array4[] = { -5, -24, -123, -81, 200, 157, 84, 67, -83, -60, -72, 192,
                     -25, -20, -50, -181, -70, -15, -108, -123 };

   // clear list_L vector
   list_L.clear();

   // get the size of the array4
   size = (sizeof(array4) / sizeof(*array4));

   // set the array4 values into vector list_L
   for (int i = 0; i < size; i++)
   {
       list_L.push_back(array4[i]);
   }

   // call the function values_of_RequestedSampleList() to display the
   // original list and, minimum value and gcd value from the finally
   // modified list
   values_of_RequestedSampleList(list_L, 20);

   cout << "========================================================================"
       << endl << endl;

   // test case 5:
   cout << "Sample Test 5:" << endl;

   // define the list
   int array5[] = {15, 72, 369, 243, 600, 471, 252, 201, 249, 180, 216, 576, 75,
                    60, 150, 543, 210, 45, 324, 369};

   // clear list_L vector
   list_L.clear();

   // get the size of the array5
   size = (sizeof(array5) / sizeof(*array5));

   // set the array5 values into vector list_L
   for (int i = 0; i < size; i++)
   {
       list_L.push_back(array5[i]);
   }

   // call the function values_of_RequestedSampleList() to display the
   // original list and, minimum value and gcd value from the finally
   // modified list
   values_of_RequestedSampleList(list_L, 20);

   cout << "========================================================================"
       << endl << endl;

   // test case 6:
   cout << "Sample Test 6:" << endl;

   // define the list
   int array6[] = { 15, 75, 45 };

   // clear list_L vector
   list_L.clear();

   // get the size of the array6
   size = (sizeof(array6) / sizeof(*array6));

   // set the array6 values into vector list_L
   for (int i = 0; i < size; i++)
   {
       list_L.push_back(array6[i]);
   }

   // call the function values_of_RequestedSampleList() to display the
   // original list and, minimum value and gcd value from the finally
   // modified list
   values_of_RequestedSampleList(list_L, 3);
   system("pause"); // Used in visual studio
   return 0;
}
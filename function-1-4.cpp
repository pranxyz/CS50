// C++ Program to find sum of elements  
// in a given array 
#include <iostream>
using namespace std; 
  
// function to return sum of elements  
// in an array of size n  
int sumtwo(int array[], int secondarray[], int n)
{  
    int sumtwo = 0; // initialize sum  
  
    // add them to sum  
    for (int i = 0; i < n; i++)  
    sumtwo = (array[i]) + (secondarray[i]);
    
    return sumtwo;
}  
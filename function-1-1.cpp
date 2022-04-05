// C++ Program to find sum of elements  
// in a given array 
#include <iostream>
using namespace std; 
  
// function to return sum of elements  
// in an array of size n  
int sum(int array[], int n)  
{  
    int sum = 0; // initialize sum  
  
    // add them to sum  
    for (int i = 0; i < n; i++)  
    sum += array[i];  
  
    return sum;  
}  
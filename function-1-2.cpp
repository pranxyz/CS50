// C++ program to calculate average of array elements 
#include <iostream> 
using namespace std; 
  
// function that return average of an array
double average(int array[], int n) 
{ 
    // find sum of array element 
    int sum = 0; 
    for (int i=0; i<n; i++) 
       sum += array[i]; 
  
    return sum/n; 
} 
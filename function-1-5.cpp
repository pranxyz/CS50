// C++ Program to find sum of elements  
// in a given array 
#include <iostream>
using namespace std; 
  
// function to return sum of elements  
// in an array of size n  
int even_count(int n)
{  
    int even_count = 0; // initialize sum  
    // add them to sum  
    for (int i = 0; i < n ; i++)  
    if  (n%2 == 0) {
         even_count++;
    }
    return even_count; 
}  
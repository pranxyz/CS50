// Driver code 
#include <iostream> 

// function to print average of an array
extern int average(int array[], int n); 

int main() 
{ 
    int array[] = {17, 4, 2, 8, 7}; 
    int n = sizeof(array)/sizeof(array[0]); 
  
    std::cout << "Average of given array is " << average(array, n);
    return 0; 
} 
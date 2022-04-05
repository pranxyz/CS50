// Driver code 
#include <iostream> 

// function to print average of an array
extern int count(int array[], int n); 

int main() 
{ 
    int array[] = {17, 4, 2, 8, 7}; 
    int n = sizeof(array)/sizeof(array[0]); 
  
    std::cout << "The number of elements in array" << count(array, n);
    return 0; 
} 
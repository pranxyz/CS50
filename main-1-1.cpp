// Driver code 
#include <iostream>

// function to print sum of elements
// in an array of size n
extern int sum(int array[], int n);  

int main()  
{  
    int array[] = {15, -8, 9, 6};  
    int n = sizeof(array) / sizeof(array[0]);  
    std::cout << "Sum of given array is " << sum(array, n);
    return 0;  
}  

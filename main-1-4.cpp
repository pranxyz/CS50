// Driver code 
#include <iostream>

// function to print sum of elements
// in an array of size n
extern int sumtwo(int array[], int secondarray[], int n);

int main()  
{  
    int array[] = {10};
    int secondarray[] = {15};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Sum of given arrays are " << sumtwo(array, secondarray, n);
    return 0;  
}  

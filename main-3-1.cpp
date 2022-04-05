#include <bits/stdc++.h> 
using namespace std; 
extern bool hasArrayTwoCandidates(int A[], int arr_size, 
                           int sum);  
/* Driver program to test above function */
int main() 
{ 
    int A[] = { 1, 4, 45, 6, 10, -8 }; 
    int n = 16; 
    int arr_size = sizeof(A) / sizeof(A[0]); 
  
    // Function calling 
    if (hasArrayTwoCandidates(A, arr_size, n)) 
        cout << "Array has two elements"
                " with given sum"; 
    else
        cout << "Array doesn't have two"
                " elements with given sum"; 
  
    return 0; 
} 

// C++ program to check if given array 
// has 2 elements whose sum is equal 
// to the given value 
  
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if array has 2 elements 
// whose sum is equal to the given value 
bool hasArrayTwoCandidates(int A[], int arr_size, 
                           int sum) 
{ 
    int l, r; 
  
    /* Sort the elements */
    sort(A, A + arr_size); 
  
    /* Now look for the two candidates in  
       the sorted array*/
    l = 0; 
    r = arr_size - 1; 
    while (l < r) { 
        if (A[l] + A[r] == sum) 
            return 1; 
        else if (A[l] + A[r] < sum) 
            l++; 
        else // A[i] + A[j] > sum 
            r--; 
    } 
    return 0; 
} 
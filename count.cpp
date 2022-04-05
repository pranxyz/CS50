#include <iostream>

// function to print the total count of even numbers in a given array

int count(int array[], int n) {
    int even_count=0;
    // loop to read all positive values 
    for (int i=0; i<n; i++){
         // check if the number is devisible by 2
         if (array[i]%2 == 0) {
             even_count++;
         }
    }   
    return even_count; 
}

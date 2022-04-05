// C++ program to convert binary to decimal 
#include <iostream> 

  
// Function to convert binary to decimal 
int binary_to_number(int binary_digits, int number_of_digits) 
{ 
    int decimal_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int binary_digits = 1; 
  
    int binary_to_number = number_of_digits; 
    while (binary_to_number) { 
        int last_digit = binary_to_number % 10; 
        binary_to_number = binary_to_number / 10; 
  
        binary_to_number += last_digit * binary_digits; 
  
        number_of_digits = number_of_digits * 2; 
    } 
  
    return binary_to_number; 
} 


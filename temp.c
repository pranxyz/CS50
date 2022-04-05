//Program converts temperatures in degrees Celsius to Fahrenheit by multiplying by 9, dividing by 5, and adding 32.
#include <stdio.h>

int main() 
{
    //declear variables for celsius and fahrenheit
    int Celsius, Fahrenheit;
    //prompt for degree in celsius
    printf("Enter temperature in degrees Celsius: ");
    //assigning input value to celsius
    scanf("%d", &Celsius);
    //conversion to fahrenheit
    Fahrenheit = ((Celsius * 9)/5) + 32;
    
    //display
    printf("%d degrees Celsius is %d Fahrenheit \n", Celsius, Fahrenheit);
    return 0;
}
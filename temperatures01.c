//Program that reads a (non-empty) sequence maximum daily temperatures. Program should first ask for the 
//number of temperatures to read and dynamically allocate  an array just big enough to hold the number of 
//temperatures you read.  You should then read in the elements of the array using a loop.  
//Then prints out the elements of the array in reverse order (from most recent to oldest). 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
    int count, i;
    //prompt user for number of temperatures
    printf("Enter number of temperatures: ");
    //assigning input number as count (number of temperatures)
    scanf("%d", &count);
    //dynamic array for temperatures
    double *temps = (double *)malloc(sizeof(double)*count);
    //prompt user for temperatures based on count 
    printf("Enter %d temperatures: \n", count);
    //assiging input numbers to temps and %lf because its double (%f for float)
    for(i=0; i<count; i++){
        scanf("%lf", &temps[i]);
    }
    //displaying count and temp
    printf("count: %d\n",count);
    printf("temperatures:\n");
    for(i=0; i<count; i++)
    printf("%.1lf ", temps[i]);
    printf("\n");
    //display the reversed output
    printf("output:\n");
    //loop for reversing all the temperature values
    for(i=count-1; i>=0; i--)
    printf("%.1lf ", temps[i]);
    printf("\n");
    //deallocate array
    free(temps)
    return 0;
}
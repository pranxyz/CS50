//Program declares an array of ints called nums containing the numbers and declares two more integer arrays 
//called evens and odds with length 12. Then writes code to copy all of the even numbers in nums (in order) 
//to evens and all the odd numbers of nums to the odds array. 
#include <stdio.h>

int main()
{
    //declare array
    int arr[] = {11, 3, 9, 7, 6, 10, 13, 17, 2, 8, 3};
    //declear evens and odds with length 12
    int evens[12], odds[12];
    //declare variables
    int num = 11, numEvens = 0, numOdds = 0, i;
    //loop to find which numbers are evens and odds
    for(i=0; i<num; i++){
        if(arr[i]%2==0){
            evens[numEvens] = arr[i];
            numEvens++;
        }
        else{
            odds[numOdds] = arr[i];
            numOdds++;
        }
    }
    //display numbers in array
    printf("nums\n");
    for(i=0; i<num; i++)
    printf("%d ", arr[i]);
    printf("\n");

    //display odd numbers in array    
    printf("odds\n");
    for(i=0; i<numOdds; i++)
    printf("%d ", odds[i]);
    printf("\n");
    
    //display even numbers in array
    printf("evens\n");
    for(i=0; i<numEvens; i++)
    printf("%d ", evens[i]);
    printf("\n");

    return 0;
}
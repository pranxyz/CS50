//Program reads a (non-empty) sequence of integers.  Program should first ask for the number of integers 
//to read and dynamically allocate  an array just big enough to hold the number of values you read.  
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
    int *array, *evensArray, *oddsArray, nums, i, evenCount=0, oddCount = 0;
    //prompt user for number of elements
    printf("Enter number of elements: ");
    //assign input as amount of elements
    scanf("%d", &nums);
    //dynamic array for numbers
    array = (int *)malloc(nums*sizeof(int));
    //prompt user for elements based on nums (amount of elements)
    printf("Enter %d elements: \n", nums);
    //assinging each input into the array
    for(i=0; i<nums; i++){
        scanf("%d", &array[i]);
        //loop for finding which numbers are evens and odds
        if(array[i]%2==0)
        evenCount++;
        else
        oddCount++;
    }
    //dynamic array for odds and evens
    evensArray = (int *)malloc(sizeof(int)*evenCount);
    oddsArray = (int *)malloc(sizeof(int)*oddCount);
    //initalise
    evenCount = oddCount = 0;
    //loop for putting evens in evens array and odds into odds array
    for(i=0; i<nums; i++){
        if(array[i]%2==0)
        evensArray[evenCount++] = array[i];
        else
        oddsArray[oddCount++] = array[i];
    }
    //display even array
    printf("Evens array: ");
    for(i=0; i<evenCount; i++){
        printf("%d ", evensArray[i]);
    }
    //display odd array
    printf("\nOdds array: ");
    for(i=0; i<oddCount; i++){
        printf("%d ", oddsArray[i]);
    }
    printf("\n");
    //deallocate array
    free(evensArray);
    free(oddsArray);
    free(array);
    return 0;
}
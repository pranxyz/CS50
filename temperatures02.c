//Program when user has to know, in advance, how many values they will enter so we can allocate an array of the right size.
//Program to keep reading values until the user types in a finishing value such as: -100.0. 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declare variables
    int count=0, hold=5, i;
    //dynamic array for temperatures
    double *temps = (double *)malloc(sizeof(double)*hold);
    double temp;
    scanf("%lf", &temp);
    //type the value -100.0 when user finish entering
    while(temp!=-100.0){
        if(count>=hold){
            //dynamically allocate a new array which is double the size 
            double *newArray = (double *)malloc(sizeof(double)*2*hold);
            for(int i=0; i<count; i++)
            //copy the old values across to the new array
            newArray[i] = temps[i];
            hold = 2*hold;
            //deallocate the old array
            free(temps)
            temps = newArray;
        }
        //continue reading into the new array
        temps[count] = temp;
        count++;
        scanf("%lf", &temp);
    }
    //display count and temperatures
    printf("count: %d\n",count);
    printf("temperatures:\n");
    for(i=0; i<count; i++)
    printf("%.1lf ", temps[i]);
    printf("\n");
    //display output
    printf("output:\n");
    for(i=count-1; i>=0; i--)
    printf("%.1lf ", temps[i]);
    printf("\n");
    //deallocate array
    free(temps);
    return 0;
}
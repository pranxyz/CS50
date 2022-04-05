//This  an array of up to 10 integers representing peoples ages in
//years and calculates and prints the maximum age and the minimum age and the average age. 
#include <stdio.h>

int main()
{
    //declare variables
    int ages[10],i,min,max,j,sum;
    float avg;
    //initialise
    i=0;
    //statements for age input and exiting mid way
    while(1)
    {
        printf("Enter age (-1 to exit): ");
        scanf("%d",&ages[i]); //putting input values in age
        //telling if -1 entered break 
        if(ages[i]==-1)
        break;
        //warning user to input a propre age
        if(ages[i]<=-1 || ages[i]>150)
        {
            printf("\nEnter a valid age again!!");
            continue;
        }
        else
        i++;
        //stops after 10th number is entered
        if(i>9)
        break;
    }
    //display ages inputed
    printf("\nAge values are: ");
    for(j=0;j<i;j++)
    {
        printf("%d ",ages[j]);
    }
    //initialise
    max=min=ages[0];
    sum=0;
    //finding max, min and sum
    for(j=0;j<i;j++)
    {
        if(max<ages[j])
        max=ages[j];
        if(min>ages[j])
        min=ages[j];
        sum=sum+ages[j];
    }
    //finding avg
    avg=sum/i;
    //display max, min and avg
    printf("\nMaximum value is: %d",max);
    printf("\nMinimum value is: %d",min);
    printf("\nAverage of the ages is: %f",avg);
    printf("\n");

    return 0;
}
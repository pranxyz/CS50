//Program that reads in a positive integer representing the number of year's a person has spent in education so far 
//and prints out the level of educational attainment associated with that number of year's education.
#include <stdio.h>

int main() 
{
    //declare variables
    int years;
    //promt for number of education years
    printf("Enter an number: ");
    //assigning input value to years
    scanf("%d",&years);
    //display
    printf("Number of years in eductaion: %d \nEducation level: ",years);
    //if statement to display education level after "Education level"
    if(years <= 7)
    printf("Primary ");
    else if(years <= 12)
    printf("Secondary ");
    else
    printf("Tertiary ");
    printf("level education\n");
    return 0;
}

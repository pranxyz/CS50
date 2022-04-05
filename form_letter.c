//For this problem you must write a C program that reads in a persons details.
#include<stdio.h>

int main()
{
    //declare the variable for age, name and fraction
    //int for number
    int age;
    //char for letters
    //for char not more than 20 letters
    char name[20];
    //float for decimals
    float fraction;
    
    //prompt for name
    printf("Enter name: ");
    scanf("%s", &name);
    //prompt for age
    printf("Enter age: ");
    scanf("%d",&age);
    //prompt for full time employment fraction
    printf("Enter Full-time employment fraction(between 0.0 and 1.0): ");
    scanf("%f",&fraction);
    
    //display 
    printf("Your name is %s, you are %d year old and your employment fraction is %.1f.\n",name,age,fraction);
    return 0;
}
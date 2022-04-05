//Program read in a positive, three digit integer and calculate the number of ones (units), tens and hundreds in the number 
//and print these on separate lines.
#include <stdio.h>

int main()
{
    //declare variables 
    int num, digits, remainder;
    //prompt for number
    printf("Enter an number: ");
    //assigning input value to num
    scanf("%d", &num);
    digits = num;
    //loop for printing last number of input on separate line 
    while (digits != 0) 
    {
    remainder = digits % 10;
    printf("%d\n",remainder);
    digits = digits / 10;
    }
    return 0;
}
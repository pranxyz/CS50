//Program contains one common error. Correct the error.
#include <stdio.h>

int main()
{
    int x = 0;
    
    printf("enter a number and I'll double it: ");
    //error was not writing "&x" instead of "x" because "x" will give the address of x and "&x" will give the value of x
    scanf("%d", &x);
    printf("twice %d is %d\n",x,2*x);
    return 0;
}
//Program contains one common error. Correct the error.
#include <stdio.h>

int main()
{
    //error was not declaring the variable x before assigning it a value in scanf
    int x; 
    
    printf("enter a number: ");
    scanf("%d", &x);
    printf("you entered: %d\n",x);
    return 0;
}
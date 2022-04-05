#include <stdio.h>

int main() 
{
    int array[5];
    int i;
    int sum=0;
    for (i=0; i<5; ++i) {
        printf("Enter a number:  ");
        scanf("%d", &array[i]);
    }
    for (i=0; i<5; ++i) {
        sum += array[i];
    }
    printf("\nThe sum of your numbers is: %d\n", sum);
    return 0;
}
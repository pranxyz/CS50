#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int k=0;
    int temp;
    printf("How many temperature to be entered: ");
    scanf("%d", &num);
    printf("\n");
    int *temperature_array = (int*)malloc(num*sizeof(int));
    int *extreme_heat = (int*)malloc(num*sizeof(int));
    
    for(i=0; i<num; ++i){
        printf("Enter a temperature: ");
        scanf("%d", &temp);
        while(temp<=0 || temp>55){
            printf("Invalid temperature ignored\n");
            printf("Enter a temperature: ");
            scanf("%d", &temp);
        }
        temperature_array[i] = temp;
    }
    printf("\nYou entered the temperatures: ");
    for(i=0; i<num; ++i){
        printf("%d ", temperature_array[i]);
    }
    for(i=0; i<num; ++i){
        if(temperature_array[i] >= 45){
            extreme_heat[k++] = temperature_array[i];
            }
    }
    printf("\nThe extreme heat instances are: ");
    for(i=0; i<k; ++i){
        printf("%d ", extreme_heat[i]);
        printf("\n");
    }
    return 0;
}

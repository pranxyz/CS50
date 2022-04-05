//Program that reads an integer (between 1 and 12) and prints out a three-letter abbreviation for a month corresponding to that number. 
#include<stdio.h>

int main()
{
    //declare variable
    int integer; 
    //prompt for a number
    printf("Enter an number: ");
    //assign number to integer
    scanf("%d",&integer); 
    //display 
    printf("%d is the month: ",integer);
    //switch statement for finding the month 
    switch (integer)
    {
        case 1: printf("Jan\n");
        break;
  
        case 2: printf("Feb\n");
        break;
  
        case 3: printf("Mar\n");
        break;
  
        case 4: printf("Apr\n");
        break;
  
        case 5: printf("May\n");
        break;
  
        case 6: printf("Jun\n");
        break;
  
        case 7: printf("Jul\n");
        break;
  
        case 8: printf("Aug\n");
        break;
  
        case 9: printf("Sep\n");
        break;
  
        case 10: printf("Oct\n");
        break;
  
        case 11: printf("Nov\n");
        break;
  
        case 12: printf("Dec\n");
        break;
  
        default : printf("Wrong Input\n");
    } //end of switch 
   return 0;
}
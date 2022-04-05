//Program reads from the user, a string of no more than 20 characters. The string represents a person's name 
//and assumes the string consists only of lower case letters and commas (the commas are to separate names). 
#include<stdio.h>
#include<string.h>

int main()
{
   //declare variables    
   char name[20];
   int i;
   //prompt for name
   printf("Enter String: ");
   scanf("%s", &name);
   //finding length
   int length=strlen(name);
   //loop for name not being longer than 20 characters
   if(length>20){
       printf("you entered more than 20 characters");
   }
   else{
       //print name if length is less than 20 characters
       printf(strupr(name));
   }
}
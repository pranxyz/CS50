//Program is able to convert names that are a mix of lower and uppercase letters to uppercase.
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
   //coverting to upper case even if there is captials in the initial input
   void to_uppercase2(char name[])
   {
       int j=0;
       while(name[j]!='\0'){
           if(name[j]>='a' && name[j]<='z') //checking for lowercase letters
           name[j] = name[j] - 32; //converting lowercase char to uppercase letters
           j++;
       }
}
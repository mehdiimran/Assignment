#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

char fun(ch)
{
   
    printf("Hello %c\n",ch);
}

int main()
{
char ch,result;
char (*p)(ch);
   printf("Enter the character\n");
   scanf("%c",&ch);

   if (isalpha(ch))
   {
       ch=toupper(ch);
   }
   else
   {
       printf("Please enter valid character");
   }
   
   p=fun(ch);
}

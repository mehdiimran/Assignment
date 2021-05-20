#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

int main()
{
   char ch;
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
   switch(ch)
   {
       case 'A':
       printf("Hello %c",ch);
       break;
       case 'B':
       printf("Hello %c",ch);
       break;
       case 'C':
       printf("Hello %c",ch);
       break;
       case 'D':
       printf("Hello %c",ch);
       break;
       case 'E':
       printf("Hello %c",ch);
       break;
       case 'F':
       printf("Hello %c",ch);
       break;
       case 'G':
       printf("Hello %c",ch);
       break;
       case 'H':
       printf("Hello %c",ch);
       break;
       case 'I':
       printf("Hello %c",ch);
       break;
       case 'J':
       printf("Hello %c",ch);
       break;
       case 'K':
       printf("Hello %c",ch);
       break;
       case 'L':
       printf("Hello %c",ch);
       break;
       case 'M':
       printf("Hello %c",ch);
       break;
       case 'N':
       printf("Hello %c",ch);
       break;
       case 'O':
       printf("Hello %c",ch);
       break;
       case 'P':
       printf("Hello %c",ch);
       break;
       case 'Q':
       printf("Hello %c",ch);
       break;
       case 'R':
       printf("Hello %c",ch);
       break;
       case 'S':
       printf("Hello %c",ch);
       break;
       case 'T':
       printf("Hello %c",ch);
       break;
       case 'U':
       printf("Hello %c",ch);
       break;
       case 'V':
       printf("Hello %c",ch);
       break;
       case 'W':
       printf("Hello %c",ch);
       break;
       case 'X':
       printf("Hello %c",ch);
       break;
       case 'Y':
       printf("Hello %c",ch);
       break;
       case 'Z':
       printf("Hello %c",ch);
       break;
       default:
       printf("Default");
   }
   return 0;
}

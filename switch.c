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
       printf("Hello %c\n",ch);
       break;
       case 'B':
       printf("Hello %c\n",ch);
       break;
       case 'C':
       printf("Hello %c\n",ch);
       break;
       case 'D':
       printf("Hello %c\n",ch);
       break;
       case 'E':
       printf("Hello %c\n",ch);
       break;
       case 'F':
       printf("Hello %c\n",ch);
       break;
       case 'G':
       printf("Hello %c\n",ch);
       break;
       case 'H':
       printf("Hello %c\n",ch);
       break;
       case 'I':
       printf("Hello %c\n",ch);
       break;
       case 'J':
       printf("Hello %c\n",ch);
       break;
       case 'K':
       printf("Hello %c\n",ch);
       break;
       case 'L':
       printf("Hello %c\n",ch);
       break;
       case 'M':
       printf("Hello %c\n",ch);
       break;
       case 'N':
       printf("Hello %c\n",ch);
       break;
       case 'O':
       printf("Hello %c\n",ch);
       break;
       case 'P':
       printf("Hello %c\n",ch);
       break;
       case 'Q':
       printf("Hello %c\n",ch);
       break;
       case 'R':
       printf("Hello %c\n",ch);
       break;
       case 'S':
       printf("Hello %c\n",ch);
       break;
       case 'T':
       printf("Hello %c\n",ch);
       break;
       case 'U':
       printf("Hello %c\n",ch);
       break;
       case 'V':
       printf("Hello %c\n",ch);
       break;
       case 'W':
       printf("Hello %c\n",ch);
       break;
       case 'X':
       printf("Hello %c\n",ch);
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

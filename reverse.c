#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

 char na[100],rev[100]={0},*p,*p1;
 int l=0,i,j;

 printf("Enter the string\n");
 scanf("%s",na);

 p=&na;
 p1=&rev;
 
 for(i=0;*(p+i)!=NULL;i++)
    {
     l=l+1;
    }

 printf("The length of the string is %d\n",l);
 
 for(i=l-1,j=0;i>=0;i--,j++)
 {
  *(p1+j) = *(p+i);
 }
 printf("string after it is reversed is %s\n",p1);
 
 return 0;

}


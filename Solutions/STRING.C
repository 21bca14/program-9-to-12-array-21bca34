/*write a program to input any string and impliment strlen() and strcmp() in a single program */
#include<stdio.h>
#include<conio.h>
void main()
{
     char s1[10],s2[10];
     //clrscrf();
     printf("\n enter first string:");
     gets(s1);
     printf("\n enter second string:");
     gets(s2);
     if(strcmp(s1,s2)==0)
     {
	   printf("\n you enterd the same string two times:");
     }
     else
     {
	   printf("\n you enterd string are not same:");
     }
     getch();
}

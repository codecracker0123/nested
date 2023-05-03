#include<stdio.h>
#include<conio.h>
void main()
{
     clrscr();
     int a=15,b=17,c=20;

   if(a<b)
   {

     if(a<c)
     {
	   printf("a is minumum");
     }
     else
     {
	   printf("c is minimum");
     }
   }
   else
   {
	   if(b<c)
	   {
	      printf("b is minimum");
	   }
	   else
	   {
	      printf("c is minimum");
	   }
    }
	   getch();
}

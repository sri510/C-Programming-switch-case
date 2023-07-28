/* to find positive or negative numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter any numbers: ");
scanf("%d",&num);
switch(num>0)
{
case 1:
       printf("%d is Positive",num);
       break;
case 0:
       switch(num<0)
       {
       case 1:
	    printf("%d is Negative",num);
	    break;
       case 0:
	    printf("%d is Zero",num);
	    break;
       }
}
getch();
}

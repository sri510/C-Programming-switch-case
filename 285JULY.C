/* to find odd or even */
#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter any number to check odd or even: ");
scanf("%d",&num);
switch(num%2)
{
case 0:
       printf("%d is Even",num);
       break;
case 1:
      printf("%d is Odd",num);
      break;
}
getch();
}

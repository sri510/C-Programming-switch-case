/* to find max between two numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
clrscr();
printf("Enter two numbers: ");
scanf("%d%d",&n1,&n2);
switch(n1>n2)
{
case 0:
       printf("%d is maximum",n2);
       break;
case 1:
      printf("%d is maximun",n1);
      break;
}
getch();
}

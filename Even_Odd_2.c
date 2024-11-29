#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("Enter a number : ");
scanf("%d",&number);
(number%2==0)?(printf("Number is EVEN")):(printf("Number is ODD"));
getch();
}
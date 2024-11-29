#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("Enter a number : ");
scanf("%d",&number);
if(number%2==0)
{
printf("number IS EVEN");
}
else
{
printf("number is ODD");
}
getch();
}
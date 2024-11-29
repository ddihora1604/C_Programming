#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
  printf("Enter any year:");
  scanf("%d",&year);
  if(year%4==0 && year%100!=0 || year%400==0)
  {
  printf("%d year is a Leap Year",year);
  }
  else
  {
  printf("%d year is not a leap year",year);
  }
  getch();
  }
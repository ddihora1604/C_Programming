#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2;
  clrscr();
  printf("Enter the two numbers : ");
  scanf("%d%d",&num1,&num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("Enter the Swapped Numbers : %d %d",num1,num2);
  getch();
}

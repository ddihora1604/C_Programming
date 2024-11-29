#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i,fibo;
 clrscr();
 a=0,b=1;
 printf("The Required Fibonacci Series is = ");
 printf("0 1");
 for(i=1;i<=4;i++)
 {
  fibo=a+b;
  printf(" %d",fibo);
  a=b;
  b=fibo;
 }
 getch();
}



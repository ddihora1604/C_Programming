#include<stdio.h>
#include<conio.h>
int GCD(int,int);
void main()
{
 int a,b;
 clrscr();
 printf("Enter first number = ");
 scanf("%d",&a);
 printf("Enter second number = ");
 scanf("%d",&b);
 printf("The GCD of the two numbers %d and %d is = %d",a,b,GCD(a,b));
 getch();
}
int GCD(int a,int b)
{
 if(b==0) return a;
 else
 {
  return GCD(b,a%b);
 }
}




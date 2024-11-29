#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
 int n,m;
 clrscr();
 printf("Enter the number of terms = ");
 scanf("%d",&n);
 m=fact(n);
 printf("The factorial of the term is = %d",m);
 getch();
}
int fact(int n)
{
 if(n==1 || n==0)
 {
  return 1;
 }
 else
 {
  return n*fact(n-1);
 }
}


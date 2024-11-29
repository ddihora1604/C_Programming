#include<stdio.h>
#include<conio.h>
void  prime(int*);
void main()
{
 int m,n1;
 clrscr();
 printf("Enter your number :");
 scanf("%d",&n1);
 prime(&n1);
 getch();
}
void prime(int*x)
{
 int i,c;
 c=0;

 for(i=2;i<*x;i++)
 {
  if(*x%i==0)
  {
   c++;
  }
 }
  if(c==0)
 {
  printf("The entered number %u is  prime",*x);
 }
 else
 {
  printf("The entered number %u is not prime",*x);}
 }









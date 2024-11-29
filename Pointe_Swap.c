#include<stdio.h>
#include<conio.h>
void swap1(int,int);
void swap2(int,int);
void main()
{
 int a,b,c,d;
 clrscr();
 printf("Enter the two numbers = ");
 scanf("%d%d",&a,&b);
 swap1(&a,&b);
 swap2(&c,&d);
 getch();
}
void swap1(int *p,int *q)
{
 int temp1;
 temp1=*p;
 *p=*q;
 *q=temp1;
 printf("The Swapped Numbers are = %d and %d ",p,q);
}

void swap2(int r,int s)
{
 int temp2;
 temp2=r;
 r=s;
 s=temp2;
 printf("The Swapped Numbers are = %d and %d ",r,s);
}




#include<stdio.h>
#include<conio.h>
int maximum(int,int);
int minimum(int,int);
void main()
{
 int n1,n2,m,n;
 clrscr();
 printf("Enter the numbers : ");
 scanf("%d %d",&n1,&n2);
 m=maximum(n1,n2);
 n=minimum(n1,n2);
 printf("The Maximum between %d and %d is : %d\n",n1,n2,m);
 printf("The Minimum between %d and %d is : %d\n",n1,n2,n);
 getch();
}
int maximum(int x,int y)
{
 if(x>y)
 {
   printf("The Maximum between %d and %d is : %d\n",x,y,x);
   return x;
 }
 else
 {
   printf("The Maximum between %d and %d is : %d\n",x,y,y);
   return y;
 }
}
int minimum(int p,int q)
{
 if(p>q)
 {
   printf("The Minimum between %d and %d is : %d\n",p,q,q);
   return q;
 }
 else
 {
   printf("The Minimum between %d and %d is : %d\n",p,q,p);
   return p;
 }
}






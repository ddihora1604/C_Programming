#include <stdio.h>
#include <conio.h>
void main()
{
int n1,n2;
clrscr();
printf("enter the number");
scanf("%d%d",&n1,&n2);
printf("n1 is lesser than n2:%d\n\t", n1<n2);
printf("n1 is greater than n2:%d\n\t", n1>n2);
printf("n1 is equal to n2:%d\n\t", n1==n2);
printf("n1 is not equal to n2:%d\n\t",n1!=n2);
printf("n1 is greater than equal to n2:%d\n\t", n1>=n2);
printf("n1 is less than equal to n2:%d\n\t", n1<=n2);
getch();
}

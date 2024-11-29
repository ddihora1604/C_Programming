#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("Greatest among %d, %d, %d is:%d",a,b,c,a);
}
else if(b>c && b>a)
{
printf("Greatest among %d, %d, %d is:%d",a,b,c,b);
}
else if(c>a && c>b)
{
printf("Greatest among %d, %d, %d is:%d",a,b,c,c);
}
if(a==b && b==c && c==a)
{
printf("All the 3 numbers are equal");
}
getch();
}


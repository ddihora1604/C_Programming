#include<stdio.h>
#include<conio.h>
void main()
{
float r,b;
float pi=3.14;
clrscr();
printf("Enter the numbers:\n");
scanf("%f%f",&r,&b);
printf("area of circle:%f\n",pi*r*r);
printf("area of square:%f\n",r*r);
printf("area of rectangle:%f\n",r*b);
getch();
}
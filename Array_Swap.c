
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],b[10],temp[10],i,n;
 clrscr();
 printf("Enter the number of terms of Array  = ");
 scanf("%d",&n);
 printf("\nEnter Array 1 = ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nThe Original Array 1 is = ");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 printf("\nEnter Array 2 = ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
 printf("\nThe Original Array 2 is = ");
  for(i=0;i<n;i++)
 {
  printf("%d",b[i]);
 }
 for(i=0;i<n;i++)
 {
  temp[i]=a[i];
  a[i]=b[i];
  b[i]=temp[i];
 }
 printf("\nThe Swapped Array 1 is = ");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
  printf("\nThe Swapped Array 2 is = ");
 for(i=0;i<n;i++)
 {
  printf("%d",b[i]);
 }
getch();
}





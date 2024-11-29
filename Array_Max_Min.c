#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,max,min;
 clrscr();
 printf("Enter the number of terms in array = ");
 scanf("%d",&n);
 printf("\nEnter the required Array = ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nThe Required Array is = ");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 max=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]>max)
  {
   max=a[i];
  }
 }
 printf("\nThe Maximum element of the array is = %d",max);
 min=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]<min)
  {
   min=a[i];
  }
 }
 printf("\nThe Maximum element of the array is = %d",min);
 getch();
}
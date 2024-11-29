#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,j,n,temp;
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
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[j]<a[i])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
 }
 printf("\nThe Sorted array in ascending order is = ");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 getch();
}







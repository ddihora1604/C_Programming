#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,pos;
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
  printf(" %d",a[i]);
 }
 printf("\nEnter the position of array to be deleted = ");
 scanf("%d",&pos);
 if(pos>=n)
 {
  printf("\nDeletion not possible");
 }
 else
 {
  for(i=pos-1;i<n-1;i++)
  {
   a[i]=a[i+1];
  }
 printf("\nThe Array with deleted element is = ");
 for(i=0;i<n-1;i++)
 {
  printf(" %d",a[i]);
 }
}
 getch();
}









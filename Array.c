#include<stdio.h>
#include<conio.h>
void main()
{

 int n,a[10],b[10],i,sum=0;
 clrscr();
 printf("Enter the Number of terms in Array = ");
 scanf("%d",&n);
 printf("Enter the Array = \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("The Required Array 1 is = ");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 printf("\nThe second and fourth element of array is \n%d\n%d",a[1],a[3]);
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 printf("\nThe sum of %d terms of the array is = %d",n,sum);
 printf("\nThe Required Array 2 is = ");
 for(i=0;i<n;i++)
 {
  b[i]=a[i];
  printf("%d",b[i]);
 }
 getch();
}

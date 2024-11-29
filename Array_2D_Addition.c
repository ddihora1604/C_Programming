#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],r,c,i,j,r1,r2,c1,c2,n[100][100],m[100][100],sum[100][100];
 clrscr();
 printf("\nEnter the number of rows of the array = ");
 scanf("%d",&r);
 printf("\nEnter the number of columns of the array = ");
 scanf("%d",&c);
 printf("\nEnter the elements of the array = ");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nThe required array is =\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
printf("\nEnter the rows of first array = ");
scanf("%d",&r1);
printf("\nEnter the columns of first array = ");
scanf("%d",&c1);
printf("\nEnter the rows of second array = ");
scanf("%d",&r2);
printf("\nEnter the columns of second array = ");
scanf("%d",&c2);
if(r1==r2 && c1==c2)
{
 printf("\nEnter the elements of first array = ");
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   scanf("%d",&n[i][j]);
  }
 }
 printf("\nThe required first array is =\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",n[i][j]);
  }
  printf("\n");
 }
 printf("\nEnter the elements of second array = ");
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   scanf("%d",&m[i][j]);
  }
 }
 printf("\nThe required second array is =\n");
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   printf("%d\t",m[i][j]);
  }
  printf("\n");
 }
 printf("\nThe Resultant Array after addition of the two arrays is =\n");
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   sum[i][j]=n[i][j]+m[i][j];
   printf("%d\t",sum[i][j]);
  }
  printf("\n");
 }
}
else
{
 printf("\nAddtion not possible");
}
getch();
}








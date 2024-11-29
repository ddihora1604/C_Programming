#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("Enter total number of rows :");
 scanf("%d",&n);
 printf("The Expected pattern is :\n");
 for(i=1;i<=n;i++)
 {
  for(j=i;j>=1;j--)
  {
   printf(" %d",j);
  }
  printf("\n");
 }
 getch();
}


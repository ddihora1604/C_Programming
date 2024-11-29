#include<stdio.h>
#include<conio.h>
int x;
void autoStorageClass()
{
 auto int a=32;
 printf("\nDemonstrating auto class\n\n");
 printf("Value of the variable 'a' %d\n",a);
}
void registerStorageClass()
{
 register char b='G';
 printf("\nDemonstrating register class \n\n");
 printf("Value of the variable 'b'%d\n",b);
}
void externStorageClass()
{
 extern int x;
 printf("\nDemonstrating extern class\n\n");
 printf("Value of the variable 'x'%d\n",x);
 x=2;
 printf("Modified value of the variable 'x'%d\n",x);
}
void staticStorageClass()
{
 int i=0;
 printf("\nDemonstraing static class\n\n");
 printf("\nLoop started:\n");
 for(i=1;i<5;i++)
 {
   static int y=5;
  int p=10;
  y++;
  p++;
  printf("\nThe value of 'y' in %d iteration is %d\n",i,y);
  printf("The value of non-static variable 'p'in %d iteration is %d\n",i,p);
  }
  printf("\nloop ended:\n");
  }
  void main()
  {
   clrscr();
   printf("A program to demonstrate Storage Classes in C\n\n");
   autoStorageClass();
   registerStorageClass();
   externStorageClass();
   staticStorageClass();
   getch();
  }

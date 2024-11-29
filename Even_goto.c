#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter The Number : \n");
  scanf("%d",&a);
  if(a%2==0)

    goto EVEN;

  else

    goto ODD;

  EVEN:printf("Number is even");
  getch();
  return;
  ODD:printf("Number is odd");
  //return;
  getch();
  }
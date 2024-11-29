#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,val1,val2;
  clrscr();
  printf("Enter the numbers\n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  val1=a+(b+(c*(a+c)))/d;
  val2=++a-b*(--c+d++);
  printf("The value 1 is %d\n",val1);
  printf("The value 2 is %d\n",val2);
  getch();
}
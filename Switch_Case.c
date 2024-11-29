#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c;
 char ch;
 clrscr();
 printf("Enter the two numbers:");
 scanf("%d%d",&a,&b);
// printf("Press + for Addition\nPress - for Subtraction\nPress * for Multiplication\nPress / for Division\nPress % for Remainder\nPress 0 for Exit");
// printf("\nEnter a choice");
 scanf("\n%c",&ch);
 switch(ch)
 {
  case '+':c=a+b;
	printf("Addition of %d and %d is :%d ",a,b,c);
	break;

  case '-':c=a-b;
	 printf("Subtraction of %d and %d is :%d ",a,b,c);
	 break;

  case '*':c=a*b;
	printf("Multiplication of %d and %d is : %d",a,b,c);
	break;

  case '/':c=a/b;
	printf("Division of %d and %d is : %d",a,b,c);
	break;

  case '%':c=a%b;
	printf("Modulus of %d and %d is : %d",a,b,c);
	break;
  case '0': exit(0);break;
  default:printf("INVALID INPUT");
  }
  getch();
  }




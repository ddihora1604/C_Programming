#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1;int ch;
 clrscr();
 printf("The Menu is :\n1st.For Loop\n2nd.While Loop\n3rd.Do While Loop\n");
 printf("Enter your choice :\n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1 :
	  for(i=1;i<=10;i++ )
	  {
	    if(i==5)
	    {
	    continue;
	    }
	    printf("The Square of %d is : %d\n",i,i*i);
	    }
	  printf("For Loop");
	  break;
  case 2 :

	  while(i<=10)
	  {
	  printf("The Square of %d is : %d\n",i,i*i);
	  i++;
	  }
	  printf("While Loop");
	  break;
  case  3 :
	   do
	   {
	   printf("The Square of %d is : %d\n",i,i*i);
	   i++;
	   }while(i<=10);

	   printf("Do While loop");
	   break;
  case 4 : exit(0);
  default : printf("INVALID CHOICE");
  }
 getch();
}



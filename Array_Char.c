#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i=0,l=0,n;
 char s[100],d[100],r[100];
 clrscr();
 printf("Enter the String = ");
 scanf("%s",&s);
 printf("\nThe Entered String is = %s",s);
 while(s[i]!='\0')
 {
 l++;
 i++;
 }
 printf("\nThe Length of the entered string is %d",l);
 for(i=0;i<l;i++)
 {
  d[i]=s[i];
 }
 printf("\nThe reverse of String is = ");
 for(i=l;i>=0;i--)
 {
  printf("%c",s[i]);
 }
 for(i=0;i<l;i++)
 {
  if(s[i]=d[i])
  {
   printf("\nThe String is Palindrome");
  }
  else
  {
   printf("\nThe String is not Palindrome");
  }
 }
  getch();
}





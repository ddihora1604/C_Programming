#include<stdio.h>
#include<conio.h>
void main()
{
 char str[200];
 int i=0,line=0,word=0,ch=0;
 clrscr();
 printf("Enter a string in multiple lines terminated with ~");
 scanf("%[^~]",str);
 printf("String is %s",str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]=='\n')
  {
  line++;
  word++;
  }
  else
  {

   if(str[i]==' '||str[i]=='\t')
   {
   word++;
   }
   else
   {
   ch++;

   }
   }
   }


 printf("Number of lines are %d " ,line);
 printf("Number of characters are %d ",ch);
 printf("Number of words are %d ",word);
 getch();
}



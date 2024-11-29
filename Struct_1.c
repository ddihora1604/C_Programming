#include<conio.h>
#include<stdio.h>

struct student
{
int rno;
char name[20];
char dept[20];
int marks;
}S1[20];
void main()
{
 int i;
 clrscr();
 printf("enter the roll no.,student name,dept and marks of students");
 for(i=0;i<2;i++)
{
 scanf("%d%s%s%d",&S1[i].rno,&S1[i].name,&S1[i].dept,&S1[i].marks);
}
 printf("the roll no,student , name , marks of students are")
 for(i=0;i<2;i++)
 {
  printf("%d%s%s%f",S1[i].rno,S1[i].name,S1[i].dept,S1[i].marks);
 }
 getch();
}
}
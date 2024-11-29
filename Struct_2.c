#include<stdio.h>
#include<conio.h>
struct student
{
int r;
char name[10];
char dept[5];
float marks;
};
struct student s1={18,"AYAAN","AI DS",95};
void main()
{
struct student s2;
printf("enter s2 information:");
scanf("%d %s %s %f",&s2.r,&s2.name,&s2.dept,&s2.marks);
printf("the data for s1 is %d %s %s %d",s1.r,s1.name,s1.dept,s1.marks);
printf("the data for s2 is %d %s %s %d",s2.r,s2.name,s2.dept,s2.marks);
getch();
}





#include<conio.h>
#include<stdio.h>
#include<string.h>
int main();
{
char s[1000];
int i, vowels=0,consonenrs=0;
printf("Enter the string:");
scanf("%[^~]s",&s);
for(int i=0;s[i];i++)
{
if(s[i]=='a', s[i]=='e',(s[i]=='i',(s[i]=='o',(s[i]=='u')
vowels++;
else
consonents++;
}
printf("vowels=%d\n",&vowels);
printf("consonents=%d\n",&consonents);
getch();
}

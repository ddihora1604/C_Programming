#include<stdio.h>
#include<conio.h>
void main()
{
  int IntData;
  float FloatData;
  char CharData;
  double DoubleData;
  clrscr();
  printf("Size of integer data type is %d bytes\n",sizeof(IntData));
  printf("Size of float data type is %d bytes\n",sizeof(FloatData));
  printf("Size of char data type is %d bytes\n",sizeof(CharData));
  printf("Size of double data type is %d bytes\n",sizeof(DoubleData));
  getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
  int b,h;
  clrscr();
  printf("Enter b:");
  scanf("%d",&b);
  printf("Enter h:");
  scanf("%d",&h);
  float a=0.5*b*h;
  printf("\n Breadth is: %d",b);
  printf("\n Height is: %d",h);
  printf("\n Area of triangle is: %f",a);
  getch();


}
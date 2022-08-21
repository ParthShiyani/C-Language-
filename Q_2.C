#include<stdio.h>
#include<conio.h>
void main()
#define P printf
{
  int a;
  clrscr();
  printf("enter a value=");
  scanf("%d",&a);

	(a%2==0)?P("your value is even=%d",a):P("your value is odd=%d",a);
  getch();
}
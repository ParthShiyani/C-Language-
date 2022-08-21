#include<stdio.h>
#include<conio.h>
#define P printf
void main()
{

  char a;
  clrscr();
  P("enter a value=");
  scanf("%c",&a);

	if(a>='a' && a<='z' || a>='A' && a<='z')
	{
		P("alphabet=%c",a);
	}
	else if(a>='0' && a<='9')
	{
		P("integer=%c",a);
	}
	else
	{
		P("spesial caracter=%c",a);
	}

  getch();
}
#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
  int a,b,c,d;
  clrscr();
  P("enter the value of a=");
  S("%d",&a);
  P("enter the value of b=");
  S("%d",&b);
  P("enter the value of c=");
  S("%d",&c);
  P("enter the value of d=");
  S("%d",&d);

  if(a>b)
  {
	if(a>c)
	{
		if(a>d)
		{
			P("A is max");
		}
		else
		{
			P("D is max");
		}
	}
	else
	{
		if(c>d)
		{
			P("C is max");
		}
		else
		{
			P("D is max");
		}
	}
  }
  else
  {
	if(b>c)
	{
		if(b>d)
		{
			P("B is max");
		}
		else
		{
			P("D is max");
		}
	}
	else
	{
		if(c>d)
		{
			P("C is max");
		}
		else
		{
			P("D is max");
		}
	}
  }

  getch();

}



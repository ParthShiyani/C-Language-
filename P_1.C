#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
  int a[10],n,i,j;
  clrscr();

  P("enter n value=");
  S("%d",&n);
  for(i=0;i<n;i++)
  {

		P("a[%d]=",i);
		S("%d",&a[i]);

  }
  for(i=0;i<n;i++)
  {
		if(a[i]<0)
		{
			P("all nagetive element of array=%d ",a[i]);
		}
  }
 getch();
}



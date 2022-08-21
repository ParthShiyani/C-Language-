#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
  int a[10][10],b[10][10],c[10][10],i,j,n;
  clrscr();

  P("enter n value=");
  S("%d",&n);

  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		P("a[%d][%d]=",i,j);
		S("%d",&a[i][j]);
	}
  }

  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		P("b[%d][%d]=",i,j);
		S("%d",&b[i][j]);
	}
  }

  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
  }

  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		P("%d ",c[i][j]);
	}
	P("\n");
  }
  getch();
}

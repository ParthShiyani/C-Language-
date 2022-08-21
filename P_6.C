#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{

  int a[10][10],b[10][10],n,i,j;
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
  P("before transpose=\n");
  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		P("%d",a[i][j]);
	}
	P("\n");
  }
  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		b[j][i]=a[i][j];
	}
  }
  P("after transpose=\n");
  for(i=0;i<n;i++)
  {
	for(j=0;j<n;j++)
	{
		P("%d",b[i][j]);
	}
	P("\n");
  }
  getch();
}
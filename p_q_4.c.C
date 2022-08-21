#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
//remove duplicate string
void main()
{
  char a[100];
  int i,j,k,l;
  clrscr();

  P("enter string=");

  gets(a);
  l=strlen(a);

  for(i=0;i<l;i++)
  {
	for(j=i+1;j<l;j++)
	{
		if(a[i]==a[j])
		{
			for(k=j;k<l;k++)
			{
				a[k]=a[k+1];
			}
			l--;
		}
	}
  }
  for(i=0;i<l;i++)
  {
	P("%c",a[i]);
  }
  getch();
}

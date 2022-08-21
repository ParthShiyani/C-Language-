#include<stdio.h>
#include<conio.h>

void main()
{
	int n,n1=0,n2=1,f,i=3;
	clrscr();
	printf("enter n value=>");
	scanf("%d",&n);
	printf("%d %d ",n1,n2);

	while(i<=n)
	{
	  f=n1+n2;
	  printf("%d ",f);
	  n1=n2;
	  n2=f;
	  i++;

	}

	getch();
}
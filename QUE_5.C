#include<stdio.h>
#include<conio.h>
void main()
{
	int n,rev=0,i,m;
	clrscr();
	printf("enter n value=>");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
	  i=n%10;
	  rev=rev*10+i;
	  n=n/10;
	}
	printf("reverse value is=>%d\n",rev);
	if(m==rev)
	{
		printf("your value is pelhidrom");
	}
	else
	{
		printf("your value is not pelhidrom");
	}

	getch();
}
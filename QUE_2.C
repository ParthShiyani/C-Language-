#include<stdio.h>
#include<conio.h>

void main()

{

	int n,mul,i=1;
	clrscr();
	printf("enter n value=>");
	scanf("%d",&n);

	while(i<=10)
	{

	mul=n*i;
	printf("%d*%d=%d",n,i,mul);
	i++;
	}

	getch();
}
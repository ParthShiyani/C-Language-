#include<stdio.h>
#include<conio.h>

void main()

{

	int n,fact=1;
	clrscr();
	printf("enter n value=>");
	scanf("%d",&n);

	while(n!=0)
	{

	  fact=fact*n;
	  n--;
	}
	printf("%d",fact);

	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,first,last,sum;
   clrscr();
   printf("enter n value=>");
   scanf("%d",&n);

   last=n%10;
   printf("last digite is=%d\n",last);
	while(n>=10)
	{

	  n=n/10;
	  first=n;
	}

	printf("first digite is=%d\n",first);

	sum=last+first;
	printf("sum of first & last digite=>%d",sum);

	getch();
}
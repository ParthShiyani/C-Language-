#include<stdio.h>
#include<conio.h>

void main()
{
   int n,i=1,count=0;
   clrscr();
   printf("enter n value=>");
   scanf("%d",&n);

	while(i<=n)
	{
	  if(n%i==0)
	  {
		count++;
	  }
	  i++;
	}
	if(count==2)
	{
		printf("you number is prime");
	}
	else
	{
		printf("your number is not prime");
	}

	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{

 int salary,total;
 clrscr();
 printf("enter your salary=");
 scanf("%d",&salary);

	if(salary<=50000 && salary >=20000)
	{
		total=salary+4000;
		printf("salary=%d",total);
	}
	else if(salary<20000 && salary >=10000)
	{
		total=salary+3000;
		printf("salary=%d",total);
	}
	else if(salary<10000 && salary >=5000)
	{
		total=salary+2000;
		printf("salary=%d",total);
	}
	else if(salary<5000 && salary >=1000)
	{
		total=salary+1000;
		printf("salary=%d",total);
	}
	else
	{
		printf("invalid task");
	}
 getch();
}
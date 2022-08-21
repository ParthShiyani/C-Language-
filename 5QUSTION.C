#include<stdio.h>
#include<conio.h>
void main()
{
	int base_salary,gross_salary,hra,da,ta;
	clrscr();
	printf("enter base_salary=");
	scanf("%d",&base_salary);

		hra=(10*base_salary)/100;
		da=(5*base_salary)/100;
		ta=(8*base_salary)/100;

		gross_salary=base_salary+hra+da+ta;
	printf("gross_salary=%d",gross_salary);


getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int unit;
float a,s=0;

clrscr();
printf("enetr units=");
scanf("%d",&unit);

	if(unit<=50 && unit>=0)
	{
		a=unit*0.50;

	}
	else if(unit>50 && unit<=100)
	{
		a=50*0.50+(unit-50)*0.70;
	}
	else if(unit>100 && unit<=250)
	{
		a=50*0.50+100*0.70+(unit-150)*1.20;
	}
	else
	{
		a=50*0.50+100*0.70+100*1.20+(unit-250)*1.50;
	}

    s=a*0.20;
	printf("total=%.2f",a+s);
   getch();
}
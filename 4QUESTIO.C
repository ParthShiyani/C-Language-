#include<stdio.h>
#include<conio.h>
void main()
{
	int celsius,feranhit;
	clrscr();
	printf("enter celcius=");
	scanf("%d",&celsius);

		feranhit=(celsius*1.8)+32;
	printf("feranhit=%d",feranhit);
getch();
}
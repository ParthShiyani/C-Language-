#include<stdio.h>
#include<conio.h>

void main()
{

	char ch;
	ch='a';
	clrscr();

	do
	{
		printf("%c ",ch);
		ch++;
	}while(ch<='z');

	getch();
}
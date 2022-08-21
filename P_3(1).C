#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void string(char []);

void main()
{
	char a[10];
	clrscr();

	puts("enter string");
	gets(a);
	string(a);

	getch();
}

void string(char b[])
{
	int length;

	length=strlen(b);
	P("length of string=%d",length);
}


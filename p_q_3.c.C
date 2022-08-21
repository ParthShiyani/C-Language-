#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void main()
{
	char a[5];
	int i;
	clrscr();

	P("enter string=");
	scanf("%[^\n]",a);

	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]!=' '&& '  ')
		{
			P("%c",a[i]);
		}
	}
	P("\n");
	getch();
}

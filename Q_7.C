#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter a,b value=");
	scanf("%d%d",&a);

	 if(a>b )
	 {
		printf("a is gretar then b");

	 }
	 else if(b>a)
	 {
		printf("b is gretar then a");
	 }
	 else if(a==b)
	 {
		printf("a snd bis same");
	 }
	 else
	 {
		printf("zero");
	 }
	  getch();
}
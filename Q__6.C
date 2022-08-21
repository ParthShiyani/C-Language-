#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter value=");
	scanf("%d",&a);

	 if(a>0)
	 {
		printf("positive");

	 }
	 else if(a<0)
	 {
		printf("nagetive");
	 }
	 else
	 {
		printf("zero");
	 }
	  getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
char day;
clrscr();
printf("press m for monday\npress t for tuesday\npress w for wednsday\npress T for thirsday\npress f for friday\npress s for saturday\npress S for sunday\n");
scanf("%c",&day);

	switch(day)
	{
		case 'm':
		printf("monday");
		break;

		case 't':
		printf("tuesday");
		break;

		case 'w':
		printf("wednsday");
		break;

		case 'T':
		printf("thirsday");
		break;

		case 'f':
		printf("friday");
		break;

		case 's':
		printf("saturday");
		break;

		case 'S':
		printf("sunnday");
		break;

		default:
			printf("invalid choice");


	}
	getch();
}
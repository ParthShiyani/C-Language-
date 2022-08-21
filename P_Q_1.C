#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void main()
{
	char a[10],f[10];
	int n,i,j,count=1;
	clrscr();

	P("enter n value=");
	S("%d",&n);

	puts("enter string=");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		S("%c",&a[i]);
		f[i]=1;
	}
	for(i=0;i<n;i++)
	{
		//count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				f[i]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
		{
			P("%c is %d\n",a[i],f[i]);
		}
	}
	P("count=%d",count);
	getch();
}



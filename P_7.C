#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 int a[10][10],n,i,j,sum=0;
 clrscr();
 P("Enter the size of array=");
 S("%d",&n);

 for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
	 {
	  P("Enter the value of a[%d][%d]=",i,j);
	  S("%d",&a[i][j]);
	  }
    }

 for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
	 {
	  P("%d ",a[i][j]);

	  } P("\n");
    }

 for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
	{
	  if(i==j)
	    {
	     sum= sum+a[i][j];
	  }
    }
}
    P("Sum of diagonal matrix is %d",sum);

    getch();
    }

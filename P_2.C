#include<stdio.h>
#include<conio.h>
#include<limits.h>
#define P printf
#define S scanf

void main()
{
 int a[10],i,n,j,s;
 clrscr();
 P("Enter the element number of array=");
 S("%d",&n);

 for(i=0;i<n;i++)
    {
     P("Enter the value of a[%d]=",i);
     S("%d",&a[i]);
     }

for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
       {
	if(a[i]>a[j])
	  {
	    s=a[i];
	    a[i]=a[j];
	    a[j]=s;
	  }
	}
     }
for(i=0;i<n;i++)
    {
     P("a[%d]=%d",i,a[i]);
     P("\n");
     }

for(i=0;i<n;i++)
   {
    if(i==n-2)
      {
       P("\nSecond largest number is a[%d]=%d",i,a[i]);
       }
     }


getch();
}

#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
   int a[100],i,j,n,pos,val,c;
   clrscr();
   P("Enter total number of array = ");
   S("%d",&n);
   for(i=0;i<n;i++)
   {
      P("a[%d] = ",i);
      S("%d",&a[i]);
   }
   P("\n1) insert\n2) update\n3) delete\nEnter your choice = ");
   S("%d",&c);
   switch(c)
   {
      case 1:
      P("Enter the position to insert = ");
      S("%d",&pos);
      P("Enter the value = ");
      S("%d",&val);
      for(i=n-1;i>=pos;i--)
      {
	 a[i+1] = a[i];
      }
      a[pos] = val;
      n++;
      for(i=0;i<n;i++)
      {
	 P("a[%d] = %d\n",i,a[i]);
      }
      break;

      case 2:
      P("Enter the position to update = ");
      S("%d",&pos);
      P("Enter the value = ");
      S("%d",&val);
      a[pos] = val;
      for(i=0;i<n;i++)
      {
	 P("a[%d] = %d\n",i,a[i]);
      }
	break;
      case 3:
      P("Enter the position to delete = ");
      S("%d",&pos);
      for(i=pos;i<=n-1;i++)
      {
	 a[i] = a[i+1];
      }
      n--;
      for(i=0;i<n;i++)
      {
	 P("a[%d] = %d\n",i,a[i]);
      }
      break;

      default :
      P("Enter the valid choice !!");
      break;
   }
   getch();
}



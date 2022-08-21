#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

void main()
{
 int a[10],i,j,k,n,z\o,val,pos;
 clrscr();
 P("Enter the size of array=");
 S("%d",&n);

 P("\nPress 1 to insert elements in array");
 P("\nPress 2 to delete elements in array");
 P("\nPress 3 to update elements in array");
 P("\nEnter Your Choice=");
 S("%d",&o);

 switch(o)
   {
      case 1:

	     for(i=0;i<n;i++)
		 {
		 P("Enter the value of a[%d]=",i);
		 S("%d",&a[i]);
		 }


	     P("\nEnter The value of you want to insert=");
	     S("%d",&val);
	     P("\nEnter in which position you want to insert value=");
	     S("%d",&pos);
	  case 2:
			
		 P("enter position=");
		 S("%d",&pos);
	     for(i=pos;i<n;i++)
		 {
		 	a[i]=a[i+1];
		 }
			n--;

	      for(i=0;i<n;i++)
	      {
	      		P("%d",a[i]);
		  }
	  
       default:
	     break;
	     }
getch();
}

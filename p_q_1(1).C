#include<stdio.h>
#include<conio.h>

int fact(int);

void main()
 {
  int n,ans;
  clrscr();
  printf("enter value of n=");
  scanf("%d",&n);
  ans=fact(n);
  printf("fact=%d",ans);
  getch();
 }

 int fact(int n)
  {
   if(n==0)
    {
     return 1;
    }
  else
   {
    return n*fact(n-1);
   }
  }
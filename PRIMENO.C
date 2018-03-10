#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,a=0;
 clrscr();
 printf("\n Enter the number: ");
 scanf("%d",&n);
 for(i=2;i<=n-1;i++)
 {
  if(n%i==0)
  a++;

 }
 if(a==0)
  printf("\n Prime number ");
 else
  printf("\n Not prime");

  getch();
  }
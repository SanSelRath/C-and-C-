#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
 int n;
 clrscr();
 printf("\n Enter the number: ");
 scanf("%d",&n);
 printf("\n The factorial of %d =%d",n,rec(n));
 getch();
 }
int rec(int x)
 {
 int f;
 if(x==1)
 return(1);
 else
 f=x*rec(x-1);
 printf("\n %d",f);
 getch();
 return(f);
 }

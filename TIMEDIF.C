#include<stdio.h>
#include<conio.h>
struct time
{
 int s,m,h;
}a,b;
void main()
{
 int t;
 clrscr();
 printf(" TIME FORMAT IS hh:mm:ss:- \n");
 printf(" Enter first time : ");
 scanf("%d%d%d",&a.h,&a.m,&a.s);
 printf("\n Enter second time: ");
 scanf("%d%d%d",&b.h,&b.m,&b.s);
 a.m=a.m+(a.h*60);
 a.s=a.s+(a.m*60);
 b.m=b.m+(b.h*60);
 b.s=b.s+(b.m*60);

 t=a.s-b.s;

 printf("\n Hence the difference is %d seconds",t);
 getch();
 }


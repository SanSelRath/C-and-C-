#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d,r1,r2;
clrscr();
scanf("%d%d%d",&a,&b,&c);
d=b*b-(4*a*c);
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(b+sqrt(d))/(2*a);
printf("roots are %d %d ",r1,r2);
if(r1==r2)
printf("Real and equal");
else
printf("Real and unequal");
}
else
printf("It is imaginary");
getch();
}

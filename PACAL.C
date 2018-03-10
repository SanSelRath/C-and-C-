#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,space,c;
clrscr();
printf("Enter n: ");
scanf("%d",&n);
space=n;
for(i=0;i<=n;i++)
{
 c=1;
 for(j=space;j>=0;j--)
 printf(" ");
 space--;
 for(k=0;k<=i;k++)
 {
 printf("%d ",c);
 c=c*(i-k)/(k+1);
 }
 printf("\n");
 }
 getch();
  }
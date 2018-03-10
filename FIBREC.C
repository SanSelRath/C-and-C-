#include<conio.h>
#include<stdio.h>
void main()
{
 int n,a;
 void fib(int);
 clrscr();
 printf("\n Enter the number of terms: ");
 scanf("%d",&n);
 fib(n);
 getch();
}

void fib(int n)
{
 static int f1,f2;
 int temp;
 if(n<2)
 {
 f1=0;
 f2=1;
 }
 else
 {
 fib(n-1);
 temp=f2;
 f2=f1+f2;
 f1=temp;
 }
 printf(" %d \n",f1);
 return;
}



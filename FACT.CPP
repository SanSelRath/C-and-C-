#include<iostream.h>
#include<conio.h>
long int fact(int x)
{
long int f=1;
for(int i=1;i<=x;i++)
f*=i;
return(f);
}
void main()
{
int n;
clrscr();
cout<<"\n Enter the number ...";
cin>>n;
cout<<"\n The factorial is "<<fact(n);
getch();
}
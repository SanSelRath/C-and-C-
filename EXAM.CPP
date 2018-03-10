#include<iostream.h>
#include<conio.h>
class sano
{
public:
int a,b,c;

void add()
{
cout<<"\n no 1";
cin>>a;
cout<<"\n no 2";
cin>>b;
c=a+b;
cout<<"The result is"<<c;

}
sano()
{
cout<<"Hi I am santhosh";
}
};

void main()
{
clrscr();
sano s;
s.add();
getch();
}


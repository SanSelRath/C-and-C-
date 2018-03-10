#include<iostream.h>
#include<conio.h>
#include<string.h>
#include"e:\tc\bin\answer.cpp"
void life(int);
void answer(char,int);
int fifty();
void phone();
void audience();
void flip();
void crore(char qu[150],char an[4][30]);
 int n=0,proceed=0,l=0;
 char a='a',b='b',c='c',d='d',s;
void main()
{
 clrscr();

 crore(q1,a1);

 n++;
 if(proceed==1)
 crore(q2,a2);

 n++;
 if(proceed==2)
 crore(q3,a3);

 n++;
 if(proceed==3)
 crore(q4,a4);

 n++;
 if(proceed==4)
 crore(q5,a5);

  n++;
 if(proceed==5)
 crore(q6,a6);

  n++;
 if(proceed==6)
 crore(q7,a7);

 n++;
 if(proceed==7)
 crore(q8,a8);

 n++;
 if(proceed==8)
 crore(q9,a9);

 n++;
 if(proceed==9)
 crore(q10,a10);

 n++;
 if(proceed==10)
 crore(q11,a11);

 n++;
 if(proceed==11)
 crore(q12,a12);

 n++;
 if(proceed==12)
 crore(q13,a13);

 n++;
 if(proceed==13)
 crore(q14,a14);

 n++;
 if(proceed==14)
 crore(q15,a15);
}

 void crore(char qu[150],char an[4][30])
 {
 char ques[150];
 char ans[4][30];
 strcpy(ques,qu);
 for(int i=0;i<=3;i++)
 strcpy(ans[i],an[i]);
 fi:
 cout<<"\n\t\t NEENGALUM VELALAAM ORU KODI "<<san;
 cout<<"\n\t\t ````````` ```````` ``` ```` ";
 life(l);
 cout<<endl<<n+1<<ques<<endl;
 if(l==0)
 cout<<a<<ans[0]<<"\t"<<b<<ans[1];
 cout<<endl;
 cout<<c<<ans[2]<<"\t"<<d<<ans[3];
 cout<<"\n Enter the choice: ";
 cin>>s;
 if(s=='a'||s=='b'||s=='c'||s=='d')
 answer(s,n);
 else if(s=='1')
 {
 l=fifty();
 goto fi;
 }
 else if(s=='2')
 audience();
 else if(s=='3')
 flip();
 else if(s=='4')
 phone();
 else
 {
 cout<<"\n Wrong Input ....";
 getch();
 }
 clrscr();

 }


void life(int l)
{
if(l==0)
cout<<"\n LIFELINES: 1.50:50 2.Audience Poll 3.Flip 4.Phone-A-Friend \n";
else if(l==1)
cout<<"\n LIFELINES: 1.Audience Poll 2.Flip 3.Phone-A-Friend \n";
}

void answer(char s,int n)
{
 if(s==sa[n])
 {
 proceed++;
 cout<<"\n Right Answer ";
 cout<<"\n\t\t ********You WON Rs."<<m[proceed]<<"/-*******";
 getch();
 }
 else
 {
 if(proceed<5)
 cout<<"\n Wrong Answer \n\t\t ****Your Price Money Rs."<<m[0]<<"/-";
 else if(proceed<10)
 cout<<"\n Wrong Answer \n\t\t ****Your Price Money Rs."<<m[5]<<"/-";
 else
 cout<<"\n Wrong Answer \n\t\t ****Your Price Money Rs."<<m[10]<<"/-";
 getch();
 }
}

int fifty()
{
 cout<<"\n 50:50 enabled .......";
 getch();
 clrscr();
 return 1;
}

void audience()
{
 cout<<"\n Audience";
}

void flip()
{
 cout<<"\n Flip";
}

void phone()
{
 cout<<"\n Phone";
}
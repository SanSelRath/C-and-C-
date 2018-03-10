#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void check2(char z[20],char x[20])
{
 if(strcmp(z,x)==0)
 {
 cout<<"\n You have found the word";
 getch();
 exit(0);
 }
 fflush(stdin);
}
void main()
{
 char ch[20],hint[20];
 char a,c[20];
 int b;
 fflush(stdin);
 clrscr();
 cout<<"\ Enter the word to guess :";
 cin>>ch;
 cout<<"\n Enter the HINT :";
 gets(hint);
 clrscr();

 for(int i=0;i<strlen(ch);i++)
 c[i]='_';

 cout<<"\n Your HINT is ";
 puts(hint);
 cout<<"\n It has "<<strlen(ch)<<"characters \n";

 cout<<"\n Game starts only 5 chances:- \n";

 for(i=0;i<5;i++)
 {
  b=0;

  check2(ch,c);
  cout<<"MORE "<<5-i<<"CHANCE... \n";
  cout<<"\n Enter character: ";
  cin>>a;

  for(int j=0;j<strlen(ch);j++)
   {

   if(ch[j]==a)
   {

    c[j]=a;
    cout<<ch[j]<<" ";
    b=1;

   }

   else
     {
     cout<<c[j]<<" ";
     }
   }


   if(b>0)
   i=i-1;

   cout<<endl;

  }

  cout<<"\n Sorry u have not found the word";
  cout<<"\n The word is "<<ch<<" :P";

 getch();
 }


#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20],b[20];
 char f[]={'F','L','A','M','E','S'};
 int i,j,c,d,e,g;
 clrscr();
 cout<<"\n Enter ur name: ";
 cin>>a;
 c=strlen(a);
 cout<<"\n Enter ur lovers name: ";
 cin>>b;
 d=strlen(b);

 for(i=0;i<c;i++)
 {

 for(j=0;j<d;j++)
  {
  if(a[i]==b[j])
   {
   b[i]='0';
   c=c-1;
   break;
   }
  }
 }

 for(j=0;j<d;j++)
 {
  if(b[j]=='0')
   d=d-1;
  }
 e=d+c;

 cout<<"\n The unmatched letters :"<<e<<endl;

 cout<<"\n Lets start the TEST ... \n";

 cout<<f<<endl;

 int k,z=6;

 for(j=0;j<=z+1;j++)
{
 z=strlen(f);
 k=e%z;

 if(k>1)
 {
 k=k-1;
 f[k]=' ';
 }
 else
 f[k]=' ';

 for(i=k;i<=z;i++)
 {
  if(f[i]==' ')
  {
   f[i]=f[i+1];
   f[i+1]=' ';
  }
 }

 cout<<f<<endl;

}

 getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char boy[15],girl[15],bo[15];//game[]={'F','L','A','M','E','S'};
int a,b,i,j,c=0,n,l;
clrscr();
printf("\n Enter the boy name: ");
scanf("%s",boy);
printf("\n Enter the girl name: ");
scanf("%s",girl);
a=strlen(boy);
b=strlen(girl);
for(i=0;i<a;i++)
{
 for(j=0;j<b;j++)
 {
 if(boy[i]==girl[j])
 boy[i]=' ';
 }
}

for(i=0;i<a;i++)
{
 if(boy[i]!=' ')
 c++;
}
  n=c+b;

for(i=0;i<=5;i++)
{
 l=n%6;
 l=l+1;
}

 switch(l)
 {
 case 1:
  printf("\n Friend");
  break;
 case 2:
  printf("\n Love");
  break;
 case 3:
  printf("\n Affection");
  break;
 case 4:
  printf("\n Marriage");
  break;
 case 5:
  printf("\n Enemy");
  break;
 default:
  printf("\n Sibling");

  }

getch();
}

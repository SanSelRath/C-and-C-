#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char name[30][30],temp[30];
 int n,i,j;
 clrscr();
 printf("\n How many names: ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
 scanf("%s",name[i]);
 }

 for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
  if(strcmp(name[i],name[j])>0)
   {
   strcpy(temp,name[i]);
   strcpy(name[i],name[j]);
   strcpy(name[j],temp);
   }
  }
 }

  printf("\n Names in order:\n");

  for(i=0;i<n;i++)
  {
  printf("%s \n",name[i]);
  }
  getch();
}
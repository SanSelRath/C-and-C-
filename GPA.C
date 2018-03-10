#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[5],i,sum,gpa;
char grade[6];
clrscr();

printf("\n GPA calculator");
printf("\n Enter marks :- \n");
printf(" Engineering Chemistry: ");
scanf("%d",&a[0]);
printf(" Engineering Graphics: ");
scanf("%d",&a[1]);
printf(" Fundamentals of Computer & Programming: ");
scanf("%d",&a[2]);
printf(" Technical English: ");
scanf("%d",&a[3]);
printf(" Engineering Mathematics: ");
scanf("%d",&a[4]);
printf(" Engineering Physics: ");
scanf("%d",&a[5]);

for(i=0;i<=5;i++)
{
  if(a[i]>90)
  {
  grade[i]='S';
  c[i]=10; }
  else if(a[i]>80&&a[i]<=90)
  {
  grade[i]='A';
  c[i]=9;   }
  else if(a[i]>70&&a[i]<=80)
  { grade[i]='B';
  c[i]=8; }
  else if(a[i]>60&&a[i]<=70)
  {  grade[i]='C';
  c[i]=7; }
  else if(a[i]>55&&a[i]<=60)
  {  grade[i]='D';
  c[i]=6; }
  else if(a[i]>=50&&a[i]<=55)
  {  grade[i]='E';
  c[i]=5; }
 else if(a[i]<50)
 { grade[i]='U';
  c[i]=1;     }
 }

 b[0]=3*c[0];
 b[1]=5*c[1];
 b[2]=3*c[2];
 b[3]=4*c[3];
 b[4]=4*c[4];
 b[5]=1*c[5];

printf("\n SUBJECTS        GRADE\t GP");
printf("\n Engg Chemistry   :%c \t %d",grade[0],b[0]);
printf("\n Engg Graphics    :%c \t %d",grade[1],b[1]);
printf("\n FOC(Computer)    :%c \t %d",grade[2],b[2]);
printf("\n English          :%c \t %d",grade[3],b[3]);
printf("\n Engg Mathematics :%c \t %d",grade[4],b[4]);
printf("\n Engg Physics     :%c \t %d",grade[5],b[5]);

sum=b[0]+b[1]+b[2]+b[3]+b[4]+b[5];

gpa=(sum/22);

printf("\n Sum:%d \n GPA:%d",sum,gpa);

getch();
}
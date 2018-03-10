#include<stdio.h>
#include<conio.h>
int check_win(int,int);
int check_run(char);
void main()
{
int i1,j1,c1[6],a,over1=0,total1=0;
int i2,j2,c2[6],over2=0,total2=0,res;
char run,chase;
int wic1=0,wic2=0;
float b1=0.1,b2=0.1;
char t1[10],t2[10];
clrscr();
printf("\n\t\t Welcome to Gully Cricket ");
printf("\n\t\t ~~~~~~~ ~~ ~~~~~ ~~~~~~~ ");
printf("\n Enter the no. of overs: ");
scanf("%d",&a);

printf("\n Enter the name of the ur team: ");
scanf("%s",t1);
printf("\n Congratulation team!!Do ur best");

for(j1=0;j1<a;j1++)
{

 for(i1=0;i1<6;i1++)
 {
 printf("\n %.1f \t",b1);
 scanf("%s",&run);
 if(run=='W')
 {wic1=wic1+1;}
 b1+=0.1;
 c1[i1] =  check_run(run);
 over1=over1+c1[i1];
 }
 b1+=0.4;
 printf("\n Runs scored in this %d/%d ",over1,wic1);
 total1=total1+over1;
 over1=0;
}
printf("\n Hence the Team score is %d",total1);




printf("\n Enter the name of the ur team: ");
scanf("%s",t2);
printf("\n Congratulate team!!Do ur best");
for(j2=0;j2<a;j2++)
{
 for(i2=0;i2<6;i2++)
 {
 printf("\n %.1f \t",b2);
 scanf("%s",&chase);
 if(chase=='W')
 {wic2=wic2+1;}
 c2[i2] = check_run(chase);
 over2=over2+c2[i2];
 res = check_win(total1,total2+over2);
 if(res==1)
 break;
 else
 b2+=0.1;
 }
 b2+=0.4;
 printf("\n Runs scored in this %d/%d ",over2,wic2);
 total2=total2+over2;
 over2 =0;
 res = check_win(total1,total2);
 if(res==1)
 break;
 else
 continue;
}

printf("\n Hence the Team score is %d",total2);

getch();
}

int check_win(int total1,int total2)
{
int result=0;
if(total1>total2)
result = 0;
else if(total2>total1)
{
printf("\n Its a amazing chase team ..u won!!!!");
result = 1;
}
return(result);
}

int check_run(char run)
{
int runs;
switch(run)
{
case '1': runs = 1;break;
case '2': runs = 2;break;
case '3': runs = 3;break;
case '4': runs = 4;break;
case '5': runs = 5;break;
case '6': runs = 6;break;
case 'w': runs = 1;break;
default : runs = 0;break;
}
return(runs);
}
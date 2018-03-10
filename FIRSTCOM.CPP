#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,a[10],w=0,r=0,tat=0,s=0,att;
float t,at;
printf("\n please enter number of process \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("bust time for %d a process \n",i+1);
scanf("%d",&a[i]);
}
printf(" please enter arrived time \n");
scanf("%d",&att);
clrscr();
printf("\n\n\t\t PROBLEM FOR FIRST COME FIRST SERVE \n");
printf("    \t\t ================================== \n\n");
printf("\n process \t bust time \t waiting time \t turn arround time \n\n");
for(i=att;i<n;i++)
{
r=r+w;
tat=a[i]+w;
s=s+tat;
printf("\n\t %d \t\t %d \t\t %d \t\t %d \n",i+1,a[i],w,tat);
w=w+a[i];
}
t=(float)r/n;
at=(float)s/n;
printf("\n\n\n average waiting time is \t %f",t);
printf("\n\n\n average turn arround time \t %f",at);
getch();
}
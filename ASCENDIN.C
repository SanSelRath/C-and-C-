#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,temp;
printf("enter the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
 if(a[i]>a[i+1])
 {
 a[i]=temp;
 a[i+1]=a[i];
 temp=a[i+1];
 }
 printf("%d",a[i]);
 }
 getch();
}
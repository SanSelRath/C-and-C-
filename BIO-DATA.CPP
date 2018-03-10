#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name;
struct data
{
int dd,mm,yy;
}d1;
struct address
{
char st[50];
char ct[50];
}a1;
}s1;
void main()
{
clrscr();
printf("ENTER THE ROLL NO \n");
scanf("%d",&s1.rollno);
printf("ENTER THE NAME \n");
scanf("%s",&s1.name);
printf("ENTER THE DATE [1-31] \n");
scanf("%d",&s1.d1.dd );
printf("ENTER THE MON  [1-12] \n");
scanf("%d",&s1.d1.mm);
printf("ENTER THE YEAR [1950-2000] \n");
scanf("%d",&s1.d1.yy);
printf("ENTER THE  STR \n");
scanf("%s",&s1.a1.st);
printf("ENTER THE CITY \n");
scanf("%s",&s1.a1.ct);
printf("ROLL NO =%d \n",s1.rollno);
printf(" NAME =%s \n",s1.name);
printf(" DATE OF BIRTH =%d.%d.%d \n",s1.d1.dd,s1.d1.mm,s1.d1.yy);
printf("STR =%s \n",s1.a1.st);
printf("CITY=%s \n",s1.a1.ct);
getch();
}

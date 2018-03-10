#include<stdio.h>
#include<conio.h>
void password();
void password()
{
char name[30],pass[8],a;             																										char san[]="santhosh";
int i,j=4;
clrscr();
printf("\n Enter the User name: ");
scanf("%s",name);

above:
fflush(stdin);
j--;
printf("\n Your Password must me EIGHT characters");
printf("\n Enter the password: ");

for(i=0;i<=7;i++)
{
a=getch();
pass[i]=a;
a='*';
printf("%c",a);
}

if(j>=0)
{
for(i=0;i<=7;i++)
{
  if(san[i]!=pass[i])
  {
  clrscr();

  printf("\n Wrong password..\n More %d attempts ",j);
  goto above;

  }

}
printf("\n Welcome Mr.%s",name);
}
else
{
clrscr();
printf("You're banned to use this database");
getch();
exit();
}
getch();
}
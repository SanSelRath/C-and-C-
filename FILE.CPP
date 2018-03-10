#include<stdio.h>
#include<conio.h>
main()
{
FILE *s;
char a[50];
clrscr();
s=fopen("sano.txt","w");
if(s==NULL)
{
puts("Cannot open a file ");
exit(1);
}
printf("\n Enter a few lines of text ");
while(strcmp(get(a),"end")!=0)
fputs(a,s);
fclose(s);
}
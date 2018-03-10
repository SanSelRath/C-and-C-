main()
{
int ln,i,n=0;
char a[50];
ln=strlen(a);
printf("enter your string");
scanf("%s",&a);
for(i=0;i<ln;i++)
{
if(a[i]=='a'|| a[i]=='i' )
{
n++;
}
}
printf("%d",n);
}

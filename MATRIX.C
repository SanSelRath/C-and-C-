#include"password.c"
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k;
password();
clrscr();
printf("Row wise\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("First Matrix is :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("Enter rows and columns of Second matrix \n");
printf("Row wise\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
printf("\t");
printf("Second Matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",b[i][j]);
printf("\n");
}
printf("Multiplication of the Matrices:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)
c[i][j]+=a[i][k]*b[k][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}
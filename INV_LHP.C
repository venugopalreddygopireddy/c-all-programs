#include<stdio.h>
void main()
{
int i,j,k,n=5;
clrscr();
for(i=0;i<n;i++)
{
for(k=0;k<=i;k++)
{
printf(" ");
}
for(j=1;j<=n-i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
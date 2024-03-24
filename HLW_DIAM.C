#include<stdio.h>
void main()
{
int i,j,k,star,n=5;
clrscr();
for(i=0;i<2*n-1;i++)
{
if(i<n)
star=2*(n-i)-1;
else
star=2*(i-n+1)+1;
for(k=0;k<star;k++)
{
printf(" ");
}
for(j=0;j<2*n-star;j++)
{
if(j==0||j==2*n-star-1)
printf("* ");
else
printf("  ");
}
printf("\n");
}
getch();
}
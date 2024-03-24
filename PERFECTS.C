#include<stdio.h>
void main()
{
int i,n=26,flag=0;
clrscr();
for(i=1;i<=n/2;i++)
{
if(n==i*i)
{
printf("%d is a perfect square\n",n);
flag=1;
break;
}
}
if(flag==0)
{
printf("%d is not a perfect square\n",n);
}
getch();
}
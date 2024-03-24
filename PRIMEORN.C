#include<stdio.h>
void main()
{
int i,n=6,count=0;
clrscr();
if(count==0||count==1)
count=1;
for(i=1;i<=n/2;i++)
{
if(n%i==0)
count++;
}
if(count==2)
printf("the given number is a prime number");
else
printf("the given number is not a prime number");
getch();
}
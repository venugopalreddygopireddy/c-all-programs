#include<stdio.h>
void main()
{
int i,count,n=3;
if(i==0||i==1)
count=1;
for(i=1;i<=n/2;i++)
{
if(n%i==0)
count++;
}
if(count==2)
printf("the given number is a prime number=%d",n);
else
printf("the given number is not a prime number=%d",n);
getch();
}


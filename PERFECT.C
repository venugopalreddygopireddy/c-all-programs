#include<stdio.h>
void main()
{
int i,n,sum=0;
for(i=1;i<n/2;i++);
{
if(n%i==0)
sum+=i;
}
if(sum==n)
printf("perfect");
else
printf("not perfect");
getch();
}
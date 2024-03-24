#include<stdio.h>
void main()
{
int i,n,count,a,d;
for(n=a;n<=n/2;n++)
{
count=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
count++;
break;
}
}
if(count==0&&n>1)
printf("%d",n);
}
}
getch();
}

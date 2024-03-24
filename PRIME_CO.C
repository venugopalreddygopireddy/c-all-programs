#include<stdio.h>
void main()
{
int i,n=7,c=0;
for(i=0;i<n;i++)
{
if(n%i==0)
c=c+1;
}
if(c==2)
printf("the given number is a prime number=%d",n);
else
printf("the given number is a composite number=%d",n);
getch();
}
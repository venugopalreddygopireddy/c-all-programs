#include<stdio.h>
void main()
{
int i,n=2,c=0;
clrscr();
for(i=2;i<n/2;i++);
{
if(n%i==0)
c++;
}
if(c==0)
{
printf("the given number is a prime number=%d",n);
}
else
{
printf("the given number is a composite number=%d",n);
}
getch();
}

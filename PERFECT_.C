#include<stdio.h>
void main()
{
int n=123,sum=0,rem=0;
rem=n%10;
sum+=rem;
n=n/10;
if(sum==n)
printf("the given number is a perfect number=%d",n);
else
printf("the given number is not a perfect number=%d",n);
getch();
}
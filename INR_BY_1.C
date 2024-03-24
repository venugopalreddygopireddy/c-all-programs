#include<stdio.h>
void main()
{
int rem,sum=0,n=1234;
clrscr();
while(n>0)
{
rem=n%10;
sum+=rem+1;
n=n/10;
}
printf("sum=%d",sum);
getch();
}
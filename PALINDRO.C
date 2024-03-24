#include<stdio.h>
void main()
{
int n=151,rem,sum=0,ori;
ori=n;
clrscr();
while(n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(sum==ori)
printf("palindrome");
else
printf("not");
getch();
}

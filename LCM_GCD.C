#include<stdio.h>
void main()
{
int gcd,lcm,a=2,b=3,i;
clrscr();
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
gcd=i;
}
lcm=a*b/gcd;
printf("lcm=%d\n",lcm);
printf("gcd=%d",gcd);
getch();
}
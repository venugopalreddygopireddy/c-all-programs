#include<stdio.h>
void main()
{
int gcd,lcm,a,b,i;
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
gcd=i;
}
lcm=a*b/gcd;
printf("lcm=%d",lcm);
printf("gcd=%d",gcd);
getch();
}
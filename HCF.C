#include<stdio.h>
void main()
{
int hcf,a=2,b=3,i;
clrscr();
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
hcf=i;
}
printf("hcf=%d",hcf);
getch();
}
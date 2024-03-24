#include<stdio.h>
void main()
{
int odd_sum=0,even_sum=0,o_count=0,e_count=0,i;
clrscr();
for(i=0;i<=10;i++)
{
if(i%2==0)
even_sum=even_sum+i;
else
odd_sum=odd_sum+i;
}
printf("the even_sum=%d",even_sum);
printf("the odd_sum=%d",odd_sum);
getch();
}


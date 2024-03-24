#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,missing;
int a[5]={1,3,4,5};
clrscr();
for(i=0;i<5;i++)
{
sum+=a[i];
}
missing=(n*(n+1))/2-sum;
printf("missing number is =%d",missing);
getch();
}
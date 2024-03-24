#include<stdio.h>
void main()
{
int i,j,k;
int rows=5;
clrscr();
for(i=0;i<5;i++)
{
for(j=0;j<2*(rows-i)-1;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
printf("* ");
}
printf("\n");
}
getch();
}
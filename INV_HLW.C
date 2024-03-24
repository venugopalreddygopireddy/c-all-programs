#include<stdio.h>
void main()
{
int r,c,k,rows=5;
clrscr();
for(r=0;r<rows;r++)
{
for(c=0;c<2*r+1;c++)
{
printf(" ");
}
for(k=0;k<2*(rows-r)-1;k++)
{
if(k==0||k==2*r||r==rows-1)
printf("* ");
else
printf(" ");
}
printf("\n");
}
getch();
}

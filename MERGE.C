#intclude<stdio.h>
void main()
{
int i,k;
int a[5]={1,2,3,4,5};
clrscr();
int b[5]={6,7,8,9,10};
int merge={0,0,0,0,0,0,0,0,0,0};
for(i=0;i<5;i++)
{
merge[i]=a[i];
}
k=i;
for(i=0;i<5;i++)
{
merge[i]=b[i];
}
for(i=0;i<5;i++)
{
printf("%d",merge);
}
getch();
}
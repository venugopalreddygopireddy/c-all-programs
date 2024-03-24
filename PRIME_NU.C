#include<stdio.h>
void main()
{
int i,l=1,h=10,flag=0;
while(l<h>
{
flag=0;
if(l<=1)
l++;
continue;
}
for(i=2;i<=l/2;i++)
{
if(l%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",l);
l++;
}
getch();
}

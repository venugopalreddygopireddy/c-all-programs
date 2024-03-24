#include<stdio.h>
void main()
{
float calculatemean(int arr[],int n){
float sum=0;
for(int i=0;i<n;i++)
{
sum+=arr[i];
}
return sum/n;
}
int calculatemode(int arr[],int n){
int maxcount=0,mode=-1,count;
for(int i=o;i<n,i++)
{
count=0;
for(int j=0;j<n;j++)
{
if(arr[j]==arr[i])
count++;
}
if(count>maxcount)
{
maxcount=count;
mode=arr[i];
}
}
return mode;
}
float calculatemedian(int arr[],int n)
{
int temp;
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
if(n%2==0)
{
return(arr[n/2-1]+arr[n/2])/2;
:
else
{
returnarr[n/2];
}
}
int main()
{
int arr[]={5,5,2,3,4,5,6,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
printf("mean:%.2f\n",calculatemean(arr,n));
printf("median:%.2f\n",calculatemedian(arr,n));
printf("mode:%.2f\n",calculatemode(arr,n));
getch();
}
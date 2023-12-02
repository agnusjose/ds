#include<stdio.h>
void main()
{
int n,i,j,temp,a[10];
printf("enter limit of the array:");
scanf("%d",&n);
printf("enter elements of array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
j=i;
while(a[j]<a[j-1]&&j>=0)
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;
}
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

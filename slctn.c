#include<stdio.h>
void main()
{
int n,i,j,min_index,temp,count=0;
printf("enter limit:");
scanf("%d",&n);
count+=2;
int a[n];
for(i=0;i<n;i++)
{
count+=2;
scanf("%d",&a[i]);
}
count++;
for(i=0;i<n;i++)
{
count+=2;
min_index=i;
for(j=i+1;j<n;j++)
{
count++;
if(a[j]<a[min_index])
{
count++;
min_index=j;
count++;
}
count++;
}
count+=4;
temp=a[i];
a[i]=a[min_index];
a[min_index]=temp;
}
count++;
printf("sorted array is:");
for(i=0;i<n;i++)
{
count+=2;
printf("%d\n",a[i]);
}
count+=3;
printf("time complexity is:%d\n",count);
printf("space complexity is:%d",24+4*n);
}

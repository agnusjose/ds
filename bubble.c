#include<stdio.h>
void main()
{
int n,i,j,temp,count=0;
printf("enter limit:");
scanf("%d",&n);
count+=2;
int a[n];
for(i=0;i<n;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
for(i=0;i<n;i++)
{
count++;
for(j=i+1;j<n;j++)
{
count++;
if(a[i]>a[j])
{
count+=4;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
count++;
}
count++;
}
count++;
printf("sorted array is:");
for(i=0;i<n;i++)
{
count+=2;
printf("%d",a[i]);
printf("\n");
}
count+=3;
printf("time complexity is:%d\n",count);
printf("space complexity is:%d\n",20+4*n);
}

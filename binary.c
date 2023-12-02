#include<stdio.h>
void main()
{
int n,i,j,temp,m,l,r,x,count=0;
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
count+=5;
l=0;
r=n-1;
m=(l+r)/2;
printf("enter element to be searched:");
scanf("%d",&x);
while(l<=r)
{
count++;
if(a[m]==x)
{
count+=2;
printf("charecter found\n");
temp=0;
break;
}
count++;
if(x>a[m])
{
l=m+1;
r=n-1;
m=(l+r)/2;
count+=4;
}
count++;
if(x<a[m])
{
l=0;
r=m-1;
m=(l+r)/2;
count+=4;
}
count++;
}
if (temp>0)
{
count++;
printf("charecter not found\n");
}
printf("time complexity is:%d\n",count);
printf("space complexity is:%d",36+4*n);
count+=3;
}

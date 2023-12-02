#include<stdio.h>
void main()
{
int i,n,flag=0,x,count=0;
count+=2;
printf("enter limit:");
scanf("%d",&n);
count++;
int a[n];
for(i=0;i<n;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
printf("enter element to be searched:");
scanf("%d",&x);
count++;
for(i=0;i<n;i++)
{
count++;
if(a[i]==x)
{
count++;
flag++;
count++;
}
count++;
}
count++;
if(flag==0)
{
printf("charecter not found\n");
count++;
}
count++;
else
{
printf("charecter found\n");
}
count++;
count++;
printf("time complexity is %d\n",count);
printf("space complexity is %d",20+4*n);
}

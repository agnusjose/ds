#include<stdio.h>
int partition(int a[n],int l,int h);
int quick();
void main()
{
int l,h,q;
if(l<h)
{
j=partition(a[n])
}
}
partition(int a[n],int l,int h)
{
int pivot,i,j,temp;
pivot=l;
i=l;j=h;
while(i<j)
{
do{
i++;
}while(a[i]<=pivot)
do{
j--;
}while(a[j]>=pivot);
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[j];
a[j]=pivot;
pivot=temp;
return j;
}
quick()

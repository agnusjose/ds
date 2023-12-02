#include<stdio.h>
void main()
{
int i,pos,n,t[50];
char ch='y';
printf("enter limit:");
scanf("%d",&n);
printf("enter elements:");
for(i=1;i<=n;i++)
{
scanf("%d",&t[i]);
}
while(ch=='y')
{
printf("enter position of node: ");
scanf("%d",&pos);
if(pos==0)
{
printf("no elements\n");
}
else
{
 if(pos/2==0)
{
printf("no parent\n");
}
else
{
printf("parent node at this position is:%d\n",t[pos/2]);
}
if(pos*2>n)
{
printf("no left child\n");
}
else
{
printf("left child is:%d\n",t[pos*2]);
}
if(pos*2+1>n)
{
printf("no right child\n");
}
else
{
printf("right child is:%d\n",t[pos*2+1]);
}
}
printf("do you want to continue(y/n)?\n");
scanf(" %c",&ch);
}
}

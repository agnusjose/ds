#include<stdio.h>
void main()
{
int top=-1,item,n,choice,i;
printf("enter limit:");
scanf("%d",&n);
int a[n];
while(choice!=5)
{
printf("\nenter choice:\n1.push\t2.pop\t3.peek\t4.dispaly\t5.exit\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
{
if(top==(n-1))
{
printf("OVERFLOW\n");
}
else
{
top=top+1;
printf("enter value:");
scanf("%d",&a[top]);
}
break;
}
case 2:
{
if(top==-1)
{
printf("UNDERFLOW\n");
}
else 
{
printf("element to be deleted is %d\n",a[top]);
item=a[top];
top=top-1;
}
break;
}
case 3:
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("element at top is %d\n",a[top]);
}
break;
}
case 4:
{
for(i=top;i>=0;i--)
{
printf("%d\n",a[i]);
}
break;
}
default :
{
printf("invalid choice\n");
break;
}
}
}
}


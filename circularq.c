#include<stdio.h>
void main()
{
int rear=-1,front=-1,n,ch,val,i;
printf("enter limit:");
scanf("%d",&n);
int a[n];
while(ch!=5)
{
printf("enter choice:\t1.enqueue\t2.dequeue\t3.display\t4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
{

if(front=-1&&rear==-1)
front=0;rear=0;
rear=(rear+1)%n;
printf("enter value");
scanf("%d",&val);
a[rear]=val;

else 
{
if(front==(rear+1)|| (front==0 && rear==n-1))
printf("overflow\n");
}


break;
}
case 2:
{
if(rear==-1&&front==-1)
printf("underflow\n");
else if(front==rear)
{
val=a[front];
printf("value to be dequeued is %d\n",val);
front=-1;rear=-1;
}
else
{
val=a[front];
printf("value to be dequeued is %d\n",val);
front=(front+1)%n;

}
break;
}
case 3:
{
if(front==-1)
{
printf("empty queue");
}
else
{
for(i=front;i!=rear;i=(i+1)%n)
{
printf("%d\n",a[i]);
}
printf("%d\n",a[i]);
}
break;
}
default :
{
printf("wrong choice");
}
}
}
}


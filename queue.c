#include<stdio.h>
void enqueue();
void display();
void dequeue();
void peek();
int max;
int front=0,rear=-1,item,a[50];
void main()
{
printf("Enter the maximum size of the queue");
scanf("%d",&max);
int choice;
do
  {
   
   printf("Enter the choice: 1.enqueue 2.dequeue 3.peek 4.display 5.EXIT");
   scanf("%d",&choice);
  
 switch(choice)
  {
   case 1:
  {
   enqueue();
    break;
  }
  case 2:
   {
   dequeue();
   break;
    }
  case 3:
     {
      peek();
      break;
     }
  case 4:
    {
     display();
     break;
     }
    default:
  {
    printf("\nWrong choice");
    break;
   }
}
}
while(choice!=5);
 }
 void enqueue()
{
   int value;
   if(rear>=max-1)
   {
          printf("OVERFLOW\n");
  }
   else
   {
    printf("Enter the value to be enqueued");
    scanf("%d",&value);
    rear++;
    a[rear]=value;
    }
}
void dequeue()
{
   int item;
   if(rear<front)
   {
     printf("UNDERFLOW\n");
   }
    else
    {
      item=a[front];
      printf("The dequeued element is %d\n",item);
      front++;
     }
  }
void peek()
{
   if(rear<front)
   {
     printf("The queue is empty\n");
   }
    else
    {
     printf("The lower element is %d\n",a[front]);
     }
     }
void display()
{
   int i;
    if(front>rear)
   {
     printf("Queue is empty\n");
   }
   else
   {
     printf(" The queue is:");
   for(i=front;i<=rear;i++)
   {
   printf("%d\t\n",a[i]);
   }
 }
 }






if(rear==(n-1)||(rear==front))
 {
 
 if(rear==(n-1))
rear=(rear+1)%n;


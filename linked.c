#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
}*head;
void insatfront();
void insatend();
void insatany();
void delfront();
void delend();
void delany();
void display();
void main()
{
int ch;
do{
printf("enter choice:\n1.insertatfront\t2.insertatend\t.3.insertatanyposition\t.4.deletefromfront\t5.deletefromend\t6.deletefromanyposition\t7.display\t8.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
insatfront();
break;
}
case 2:
{
insatend();
break;
}
case 3:
{
insatany();
break;
}
case 4:
{
delfront();
break;
}
case 5:
{
delend();
break;
}
case 6:
{
delany();
break;
}
case 7:
{
display();
break;
}
default:
{
printf("invalid choice");
break;
}
}
}while(ch!=8);
}
void insatfront()
{
int item;
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter value:");
scanf("%d",&item);
if(head==NULL)
{
temp->data=item;
temp->link=NULL;
head=temp;
}
else
{
temp->data=item;
temp->link=head;
head=temp;
}
}
void insatend()
{
struct node *ptr,*temp;
int item;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter value:");
scanf("%d",&item);
if(head==NULL)
{
temp->data=item;
temp->link=NULL;
head=temp;
}
else
{
ptr=head;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=temp;
temp->data=item;
temp->link=NULL;
}
}
void insatany()
{
struct node *ptr,*temp;
int item,key;
if(head==NULL)
{
printf("invalid choice\n");
}
else
{
printf("enter value after which new node to be created:");
scanf("%d",&key);
temp=(struct node*)malloc(sizeof(struct node));
printf("enter value:");
scanf("%d",&item);
ptr=head;
while(ptr->data!=key)
{
ptr=ptr->link;
}
temp->data=item;
temp->link=ptr->link;
ptr->link=temp;
}
}
void delfront()
{
struct node *ptr,*temp;
if(head==NULL)
{
printf("empty list\n");
}
else if(head->link==NULL)
{
ptr=head;
head=NULL;
printf("value to be deleted is %d\n",ptr->data);
free(ptr);
}
else
{
ptr=head;
temp=ptr->link;
head=temp;
printf("value to be deleted is %d\n",ptr->data);
free(ptr);
}
}
void delend()
{
struct node *ptr,*temp;
if(head==NULL)
{
printf("empty list\n");
}
else if(head->link==NULL)
{
ptr=head;
head=NULL;
printf("value to be deleted is %d\n",ptr->data);
free(ptr);
}
else
{
ptr=head;
temp=ptr->link;
while(temp->link!=NULL)
{
ptr=temp;
temp=temp->link;
}
ptr->link=NULL;
printf("value to be deleted is %d\n",temp->data);
free(temp);
}
}
void delany()
{
int i=1,pos;
struct node *ptr,*temp;
if(head==NULL)
{
printf("empty list\n");
}
else
{
printf("enter position after which node to be deleted:");
scanf("%d",&pos);
ptr=head;
while(i<(pos-1))
{
ptr=ptr->link;
i++;
}
temp=ptr->link;
ptr->link=temp->link;
printf("value to be deleted is %d\n",temp->data);
free(temp);
}
}
void display()
{
struct node*ptr;
if(head==NULL)
{
printf("empty list\n");
}
else
{
ptr=head;
printf("%d\t",ptr->data);
while(ptr->link!=NULL)
{
ptr=ptr->link;
printf("%d\t",ptr->data);
}
}
}

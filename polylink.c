#include<stdio.h>
#include<stdlib.h>
void main(){
int n1,n2,i,coef1,exp1;
struct node{
int coef,exp;
struct node *link;
}*rhead=NULL,*phead=NULL,*qhead=NULL,*r,*p,*q,*temp;
printf("enter number of terms in 1st polynomial\n");
scanf("%d",&n1);
printf("enter number of terms in 2nd polynomial\n");
scanf("%d",&n2);
if(n1!=0)
  printf("enter elements of 1st polynomial\n");
for(i=0;i<n1;i++)
{
   printf("enter coefficient:");
   scanf("%d",&coef1);
   printf("enter exponent:");
   scanf("%d",&exp1);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->coef=coef1;
   temp->exp=exp1;
   temp->link=NULL;
   if(phead==NULL){
     phead=temp;
     p=temp;
    }
  else{
     p->link=temp;
     p=temp;
     }
 }
  if(n2!=0)
    printf("enter elements of 2nd polynomial\n");
for(i=0;i<n2;i++)
{
   printf("enter coefficient:");
   scanf("%d",&coef1);
   printf("enter exponent:");
   scanf("%d",&exp1);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->coef=coef1;
   temp->exp=exp1;
   temp->link=NULL;
   if(qhead==NULL){
     qhead=temp;
     q=temp;
    }
  else{
     q->link=temp;
     q=temp;
     }
 } 
  printf("p=");
  if(p==0)
  {
  printf("null");
  }
  else
  {
 p=phead;
 while(p!=NULL)
 {
 if(p->link==NULL){
      printf("%dx^%d  ",p->coef,p->exp);
    }
    else{
        printf("%dx^%d + ",p->coef,p->exp);
    }
 p=p->link;
 }
 }
 printf("\n");
  printf("q=");
  if(q==0)
  {
  printf("null");
  }
  else
  {
 q=qhead;
 while(q!=NULL)
 {
  if(q->link==NULL){
      printf("%dx^%d  ",q->coef,q->exp);
    }
    else{
        printf("%dx^%d + ",q->coef,q->exp);
    }
 q=q->link;
 }
 }
 printf("\n"); 
p=phead;
q=qhead;
while (p!=NULL && q!=NULL){
    temp=(struct node*)malloc(sizeof(struct node));
    if(p->exp == q->exp){
        temp->coef=p->coef+q->coef;
        temp->exp=p->exp;
        temp->link=NULL;
        p=p->link;
        q=q->link;
    }
    else if(p->exp> q->exp){
        temp->exp=p->exp;
        temp->coef=p->coef;
        temp->link=NULL;
        p=p->link;
    }
    else{
        temp->exp=q->exp;
        temp->coef=q->coef;
        temp->link=NULL;
        q=q->link;
    }
     if(rhead==NULL){
     rhead=temp;
     r=temp;
    }
  else{
     r->link=temp;
     r=temp;
     }
}
while(p!=NULL){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->exp=p->exp;
    temp->coef=p->coef;
    temp->link=NULL;
    p=p->link;
     if(rhead==NULL){
     rhead=temp;
     r=temp;
    }
  else{
     r->link=temp;
     r=temp;
     }
}
while(q!=NULL){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->exp=q->exp;
    temp->coef=q->coef;
    temp->link=NULL;
    q=q->link;
     if(rhead==NULL){
     rhead=temp;
     r=temp;
    }
  else{
     r->link=temp;
     r=temp;
     }
}
 printf("result=");
 r=rhead;
 i=1;
 while(r!=NULL)
 {
    if(r->link==NULL){
      printf("%dx^%d  ",r->coef,r->exp);
    }
    else{
        printf("%dx^%d + ",r->coef,r->exp);
    }
 r=r->link;
 }
 printf("\n");
}

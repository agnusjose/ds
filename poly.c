#include<stdio.h>
void main()
{
int n,i;
printf("enter no. of terms:");
scanf("%d",&n);
struct poly
{
int coef,exp;
}p[n];
for(i=0;i<n;i++)
{
printf("enter exponent:");
scanf("%d",&p[i].exp);
printf("enter coefficient:");
scanf("%d",&p[i].coef);
}
for(i=0;i<n;i++)
{
printf("%dx^%d",p[i].coef,p[i].exp);
if(i!=n-1)
printf("+");
}
}

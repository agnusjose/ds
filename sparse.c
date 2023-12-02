#include<stdio.h>
void main()
{
int i,j,r,c,k,count=0;
printf("enter no. of rows:");
scanf("%d",&r);
printf("enter no. of columns");
scanf("%d",&c);
int s[r][c];
printf("enter sparse matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&s[i][j]);
}
}
k=1;
struct sparse
{
int row;
int col;
int val;
}sp[10];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(s[i][j]!=0)
{
sp[k].row=i;
sp[k].col=j;
sp[k].val=s[i][j];
count++;
k++;
}
}
}
sp[0].row=r;
sp[0].col=c;
sp[0].val=count;
printf("tuple matrix is:\n");
printf("rows\tcolumns\tvalues\n");
for(i=0;i<k;i++)
{
printf("%d\t%d\t%d\t\n",sp[i].row,sp[i].col,sp[i].val);
}
}

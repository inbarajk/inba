#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,smallest;
printf(" \n enter the size of arrray:");
scanf(" %d",&n);
printf("\n enter %d element of the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
smallest=a[0];
}
for(i=1;i<n;i++)
{
if(smallest>a[i])
smallest=a[i];
}
printf("\n smallest elements :%d",smallest);
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],temp,i,j,n;
printf(" \n sort elements of arrray:");
scanf(" %d",&n);
printf("\n enter %d element of the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
    for(j=i;j<n;j++)
    {
      if(a[j]<a[i])
      {
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("\n %d",a[i]);
}
printf("\n");
}

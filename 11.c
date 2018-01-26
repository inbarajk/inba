#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum=0;
clrscr();
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<=2;i++)
{
sum=sum+a[i];
printf("\n the value of %d",sum);
}
getch();
}



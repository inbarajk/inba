#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3],sum=0,i;
    clrscr();
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}

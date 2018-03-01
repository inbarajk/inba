#include<stdio.h>
#include<conio.h>
void main()
{
    int i,max,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=10;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("the value of %d",max);
    
}

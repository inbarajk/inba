#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,n;
    scanf("%d",&n);
    printf("enter element of the array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
   }
    printf("%d\n",a[n/2]);
}

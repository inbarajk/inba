#include <stdio.h>
#include<conio.h>
void main()
{
    int a,n,b;
    scanf("%d",&a);
    scanf("%d",&b);
    n=a;
    a=b;
    b=n;
    printf("%d\n%d\n",a,b);
}

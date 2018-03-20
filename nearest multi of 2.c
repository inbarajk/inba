#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    scanf("%d",&a);
    a+=1;
    while(a%4!=0)
    {
        a=a+1;
    }
    printf("%d",a);
}

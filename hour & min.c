#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("the value of minute");
    scanf("%d",&a);
    b=a/60;
    c=a%60;
    if(c>60)
    {
        d=c%60;
        c=c-d;
    }
    printf("%d%d%d",b,c,d);
}

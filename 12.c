#include<stdio.h>
void main()
{
    int count=0,a;
    printf("enterthe variable a");
    scanf("%d",&a);
    while (a!=0)
    {
        a /= 10;
        ++count;
    }
    printf("Number of digits: %d", count);
}

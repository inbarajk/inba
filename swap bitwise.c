#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("a is %d",a );
    printf(" b is %d",b);
}

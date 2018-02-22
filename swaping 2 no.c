#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
int a,b ,temp;
printf(" the value of :");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf(" the values are %d%d",a,b);
}

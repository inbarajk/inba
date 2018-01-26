#include<stdio.h>

void main()
{
int a,b,c;
printf("enter value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\n a=%d is large ",a);
else if((a<b)&&(b>c))
printf("\n b=%d is large",b);
else
printf("\n c=%d is large ",c);
//getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,n,n1,remainder;
clrscr();
scanf("%d",&n);n1=n;
while(n>0)
{
reainder=n%10;
s=s+(reainder*remainder*remainder);
n=n/10;
}
if(n1==s)
{
printf("armstrong num");
}
else
{
printf(" not amstrong num");
}
getch();
}

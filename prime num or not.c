#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,b=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
        if(b==2)
        {
            printf("a is prime number");
        }
        else
        {
            printf("a is not prime number");
        }
    }
}
    

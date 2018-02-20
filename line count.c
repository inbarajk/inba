#include<stdio.h>
#include<conio.h>
void main()
{
char  a[10];
int temp=1,i,b;
printf("the letter of :");
scanf("%s",&a);
b = strlen(a);
for(i=0;i<b;i++)
{
    if(a[i]==' ')
    {
    temp++;
    printf(" %d",temp);
    }
    else
    {
        printf("%d",temp);
    }
    return(0);
}
}


#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50],b[10];
    int n;
    scanf("%s",&a);
    strcpy (b,a);
    strrev(a);
    n=strcmp(a,b);
    if(n==0)
    {
        printf("palindrome");
    }else
    {
        printf("not a palindrome");
        
    }
}

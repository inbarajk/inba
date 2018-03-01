#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
char a[100];
int count=0,i;
clrscr();
printf("\n Enter the sentence:");
scanf("%[^\n]a",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
count=count+1;    
}
printf("\n Number of words are: %d",count);
getch();
return 0;
}

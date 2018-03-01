#include<stdio.h>
#include<conio.h>
void main()
{
    
	char a[1000];
	int n,i,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='.'||a[i]==9)
		count=count+1;
	}
	printf("%d",count);

}

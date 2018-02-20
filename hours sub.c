#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b,c,d,t1,t2,e,f;
	scanf("%d%d",&a,&c);
	scanf("%d%d",&b,&d);
	t1=a*60+c;
	t2=b*60+d;
	if(t1>t2)
	{
		i=t1-t2;
		printf("%d\n",i);
	}
	else
	{
		i=t2-t1;
		printf("%d\n",i);
	}
	e=i/60;
	f=i%60;
	printf("%d:%d",e,f);
}

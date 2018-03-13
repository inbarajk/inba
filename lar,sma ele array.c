#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],j,i,b,n;
    scanf("%d",&n);
    printf("enter element of the array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
   }
    for(i=1;i<n;i++)
    {
      for(j=j+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              b=a[i];
              a[i]=a[j];
              a[j]=b;
          }
          }
      }
        printf("largest element %d\n",a[0]);
        printf("smallest element%d",a[b-1]);
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=3,count,b;
clrscr();
printf("\n the value of :");
scanf("%d",&a); 
   if ( a >= 1 )
   {
      printf("\n First %d prime numbers  :",a);
      printf("2\a");
   }
 
   for ( count = 2 ; count <= a ;  )
   {
      for ( b = 2 ; b <= i - 1 ; b++ )
      {
         if ( i%b == 0 )
            break;
      }
      if ( b == i )
      {
         printf("%d\n", i);
         count++;
      }
      i++;
   }
 
   return 0;
}

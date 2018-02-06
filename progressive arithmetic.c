   #include<stdio.h>
   #include<conio.h>
   void main()
    {
       int AP, a,n,d,sum;
       clrscr();
       n=1; d=1; a=3;
       sum=a*(2*n+(a-1)*d)/2;
       AP=n+(a-1)*d;
       printf("Arithmetic progression is : %d\n",AP);
       printf("sum of arithmetic progression:%d",sum);
       getch();
    }

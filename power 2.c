#include <stdio.h>
#include<conio.h>
void main()
{
    int num, tempa,flag;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    tempa=num;
    flag=0;
    while(tempa!=1)
    {
        if(tempa%2!=0){
            flag=1;
            break;
        }
        tempa=tempa/2;
    }
  
    if(flag==0)
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}

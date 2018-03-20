#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char bb[10];
    scanf("%s",&bb);
    if((bb>='a'&&bb<='A')||(bb>='z'&&bb<='Z'))
    {
        if(bb=='a'||bb=='A'||bb=='e'||bb=='E'||bb=='i'||bb=='I'||bb=='o'||bb=='O'||bb=='u'||bb=='U')
        {
            printf("vowels are there:",bb);
        }else
        {
            printf("vowels is not there",bb);
        }
    }}

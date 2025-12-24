#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    ch= getchar();
    ch=ch+32;
    printf("the given character in uppercase is  %c\t",ch);
    return 0;
}
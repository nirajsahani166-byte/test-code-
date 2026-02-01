/*program to scan uppercase and convert it into lower case and display it */
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
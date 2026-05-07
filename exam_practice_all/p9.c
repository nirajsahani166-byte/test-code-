/*program to conver the uppercase character to lowercase using the unformatted I/O function.*/
#include<stdio.h>
int main()
{
    char l,u;
    puts("enter a uppercase character");
    u=getchar();
    l=u+32;
    puts("\n its lowercase character is ");
    putchar(l);
    return 0;
}
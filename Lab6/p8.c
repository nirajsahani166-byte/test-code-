#include<stdio.h>
#include<string.h>
int main()
{
    char first[20],last[20];
    printf("enter your first name ");
    scanf("%s",&first);
    printf("enter your last name ");
    scanf("%s",&last);
    strcat(first,last);
    printf("your full name is %s\n the length of your full name is %d",first,strlen(first));
    return 0;
}
/*program to scan two string and add them and then find the total character in the given string.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char first[20],last[20];
    printf("enter your first name");
    scanf("%s",first);
    printf("enter your last name");
    scanf("%s",last);
    strcat(first,last);
    printf(" the addition of both string is %s and the sum of the total character is %d",first,strlen(first));
    return 0;
}
/*program to check the user-given string is palindrome or not.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],rev[20];
    printf("enter your name");
    scanf("%s",name);
    strcpy(rev,name);
    strrev(name);
    if(strcmp(rev,name)==0)
    {
        printf("%s is palindrome",name);
    }  
    else 
    {
        printf("%s is not palindrome",name);
    }  
    return 0;
}
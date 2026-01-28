#include<stdio.h>
#include<string.h>
int main()
{
    char arm[50],word[50];
    printf("enter a word ");
    scanf("%s",word);
    strcpy(arm,word);
    strrev(word);
    if(strcmp(arm,word)==0)
    {
        printf(" %s is palindrome ",arm);
    }
    else
    {
        printf(" %s is not palindrome ",word);
    }
    return 0;
}
/*program to find the length and reverse of a string without using strlen() and strrev().*/
#include<stdio.h>
int main()
{
    char name[20],l,i,sort;
    printf("enter your name");
    scanf("%s",name);
    for(l=0;name[l]!='\0';l++)
    {
    }
    for(i=0;i<l/2;i++)
    {
        sort=name[i];
        name[i]=name[l-1-i];
        name[l-1-i]=sort;
    }
    printf("the reverse of %s and length is %d",name,l);
    return 0;
}
/*program to scan name and address of a student and display it */
#include<stdio.h>
int main()
{
    char name[20],add[30];
    printf("enter your name and address");
    scanf("%s%s",&name,&add);
    printf("the name is %s and address is %s",name ,add);
    return 0;
}
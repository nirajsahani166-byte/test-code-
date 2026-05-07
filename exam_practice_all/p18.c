/*program to scan the value from the  1-7 and  display the corresponding days accordingly using switch-case statement.*/
#include<stdio.h>
int main()
{
    int day;
    printf("enter the day number");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednessday");
        break;
        case 5:
        printf("thrusday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saturday");
        break;
        default:
        printf("please enter a valid number 1-7");
        break;
    }
    return 0;
}

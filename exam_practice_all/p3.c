/*program to scan the value of second and convert it into equivalent hours, minutes and second*/
#include<stdio.h>
int main()
{
    int sec,min,hr;
    printf("Enter the seconds");
    scanf("%d",&sec);
    hr=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    printf("\n the equivalence is %dhr %dmin and %dsec",hr,min,sec);
    return 0;
}
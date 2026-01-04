#include<stdio.h>
int main()
{
    int yrs;
    printf("enter the year");
    scanf("%d",&yrs);
    if(yrs%4==0&&yrs%100!=0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
    return 0;
}
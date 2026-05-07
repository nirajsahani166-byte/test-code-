/*program to check the user-given year is leap year or not.*/
#include<stdio.h>
int main()
{
    int yrs;
    printf("Enter a year");
    scanf("%d",&yrs);
    if(yrs%4==0&&yrs%100!=0)
    {
        printf("\n%d year is leap.",yrs);
    }
    else
    {
        printf("\n%d year is not leap.",yrs);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int s,m,h;
    printf("enter the time in seconds");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("time is %d hour %d minutes and %d seconds",h,m,s);
    return 0;
}
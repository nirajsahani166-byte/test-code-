#include<stdio.h>
int main()
{
    int cm,m;
    printf("enter the length in cm");
    scanf("%d",&cm);
    m=cm/100;
    cm=cm%100;
    printf("length  is %d m and %d cm ",m,cm);
    return 0;
}
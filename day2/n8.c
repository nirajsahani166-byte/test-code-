#include<stdio.h>
int main()
{
    int n,r1,r2,r3;
    printf("enter three digit number");
    scanf("%d",&n);
    r1=n%10;
    n=n/10;
    r2=n%10;
    r3=n/10;
    //rev=r3r2r1 this does not work
    printf("reverse is %d%d%d",r1,r2,r3);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,r1,r2,r3,r4,rev;
    printf("enter four digit number");
    scanf("%d",&n);
    r1=n%10;
    n=n/10;
    r2=n%10;
    n=n/10;
    r3=n%10;
    r4=n/10;
    rev=r1*1000+r2*100+r3*10+r4;
    printf("the reverse is %d",rev);
    return 0;
}
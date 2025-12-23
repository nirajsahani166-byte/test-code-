#include<stdio.h>
int main()
{
    int n,r1,r2,r3,s;
    printf("enter three digit number");
    scanf("%d",&n);
    r1=n%10;
    n=n/10;
    r2=n%10;
    r3=n/10;
    s=r1+r2+r3;
    printf("sum of digits is %d",s);
    return 0;
}
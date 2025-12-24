#include <stdio.h>
int main()
{
    int n,r1,r2,r3,r4,p;
    printf("enter four digit number");
    scanf("%d",&n);
    r1=n%10;
    n=n/10;
    r2=n%10;
    n=n/10;
    r3=n%10;
    r4=n/10;
    p=r1*r2*r3*r4;
    printf("the product is %d",p);
    return 0;

}
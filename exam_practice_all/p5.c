/*Program to scan 4-digit no and find the reverse of the number and display it*/
#include<stdio.h>
int main()
{
    int num,rev,r1,r2,r3,r4,n;
    printf("enter the four digit number");
    scanf("%d",&num);
    n=num;
    r1=num%10;
    num=num/10;
    r2=num%10;
    num=num/10;
    r3=num%10;
    r4=num/10;
    rev=r1*1000+r2*100+r3*10+r4;
    printf("\n the given digit %d in reverse order is %d",n,rev);
    return 0;
}
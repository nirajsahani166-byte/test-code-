/*program to scan a 4 digit number and find the sum of the individual digit of a 4-digit number*/
#include<stdio.h>
int main()
{
    int num,r1,r2,r3,r4,sum=0;
    printf("enter the 4-digit number");
    scanf("%d",&num);
    r1=num%10;
    num=num/10;
    r2=num%10;
    num=num/10;
    r3=num%10;
    r4=num/10;
    sum=r1+r2+r3+r4;
    printf("The sum of the individual digit is %d",sum);
    return 0;
}
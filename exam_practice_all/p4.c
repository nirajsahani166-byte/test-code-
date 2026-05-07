/*program to scan a 4 digit number and find the product of individual digit and display it*/
#include<stdio.h>
int main()
{
    int num,r1,r2,r3,r4,pro;
    printf("Enter the four digit number");
    scanf("%d",&num);
    r1=num%10;
    num=num/10;
    r2=num%10;
    num=num/10;
    r3=num%10;
    r4=num/10;
    pro=r1*r2*r3*r4;
    printf("\nThe product of the individual digit is %d",pro);
    return 0;
}
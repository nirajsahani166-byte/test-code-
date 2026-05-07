/*program to check the 4-digit number is palindrom or not.*/
#include<stdio.h>
int main()
{
    int num,r1,r2,r3,r4,cond,rev;
    printf("Enter four digit number");
    scanf("%d",&num);
    cond=num;
    r1=num%10;
    num=num/10;
    r2=num%10;
    num=num/10;
    r3=num%10;
    r4=num/10;
    rev=r1*1000+r2*100+r3*10+r4;
    if (cond==rev)
    {
        printf("%d is palindrome",rev);
    }
    else
    {
        printf("%d isnot palindrome",rev);
    }
    return 0;
}
/*Program to find the sum of the series 1 11 111 1111 11111......*/
#include<stdio.h>
int sum(int n);
int main()
{
    int num,s;
    printf("enter the terms");
    scanf("%d",&num);
    s=sum(num);
    printf("the sum is %d",s);
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return(1+10*sum(n-1));
    }
}
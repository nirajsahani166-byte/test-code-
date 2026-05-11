/*progarm to find the sum of n-natural number using recursive function.*/
#include<stdio.h>
int sum(int n);
int main()
{
    int trm,s;
    printf("enter the number of term");
    scanf("%d",&trm);
    s=sum(trm);
    printf("The sum is %d",s);
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
        return (n+sum(n-1));
    }
}
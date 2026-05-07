/*program to find the sum of n-natural number using the for loop.*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum upto %d is %d",n,sum);
    return 0;
}
/*program to find the sum of the series 1!+2!+3!+4!+.......+n! */
#include<stdio.h>
int main()
{
    int i,j,n,fact,sum=0;
    printf("enter the terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("the sum of series upto %d term is %d",n,sum);
    return 0;
}
/*progarm to find the sum of the series x^1+x^2/2!+x^3/3!+........+n-terms*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,fact,j,n;
    float sum=0,t;
    printf("enter the number of the terms");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        t=(pow(x,i))/fact;
        sum=sum+t;
    }
    printf("the sum of the series is %f upto %d terms",sum,n);
    return 0;
}
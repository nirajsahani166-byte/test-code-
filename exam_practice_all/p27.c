/*program to find the sum of the series x+x^2+x^3+.........+x^n*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,n,sum=0;
    printf("enter the value of x, and no of the terms");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(x,i);
    }
    printf("The sum of the series upto n term is %d",sum);
    return 0;
}
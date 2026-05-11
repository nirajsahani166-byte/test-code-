/*program to find the sum of the series 1+1/2^2+1/+3^2+1/4^2+.......*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float s=0,t;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=1/pow(i,2);
        s=s+t;
    }
    printf("%f is the sum of the series upto %d terms",s,n);
    return 0;
}
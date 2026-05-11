/*program to find the sum of the series (1*2)/(2*3)+(2*3)/(4*5)+........*/
#include<stdio.h>
int main()
{
    int i,n,s=0,t;
    printf("enter the number of the terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=(i*i+1)/(i+1*i+2);
        s=s+t;
    }
    printf("\nthe sum of  %d term of the series is %d",n,s);
    return 0;
}
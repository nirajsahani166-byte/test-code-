/*program to find the sum of the series 1!+2!+3!+....+n!*/
#include<stdio.h>
#include<math.h>
int fact(int n);
int main()
{
    int trm;
    long sum;
    printf("enter the number of terms");
    scanf("%d",&trm);
    sum=fact(trm);
    printf("the sum of the series is %d",sum);
    return 0;
}
int fact(int n)
{
    int j,i,k;
    long s=0;
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
          k=k*j;
        }
        s=s+k;
    }
    return s;
}
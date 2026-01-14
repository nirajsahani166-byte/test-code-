#include<stdio.h>
#include<math.h>
int main()
{
    int n, i,x ,t1;
    float s=0;
    printf("enter the term");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        t1=pow(x,i)/i;
    printf("%d\n",t1);
    s=s+t1;
    }
    printf("sum of series is %f",s);
    return 0;
}
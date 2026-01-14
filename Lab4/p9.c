#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float s=0,t1;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t1=pow((1.0/i),2);
        s=s+t1;
    }
    printf("sum of series is %f",s);
    return 0;
}
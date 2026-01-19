#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    float sum=0.0,f,x;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        f=1.0;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        sum=sum+pow(-1,i)*pow(x,i)/f;
    }
    printf("the sum of series is %f",sum);
    return 0;
}
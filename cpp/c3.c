#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum=0,f;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        sum=sum+f;
    }
    printf("The sum of series is %d",sum);
    return 0;
}
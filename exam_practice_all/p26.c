/*Program to find the sum of series 1^2+2^2+3^2+............+n terms*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("\nThe sum of the series is %d",sum);
    return 0;  
}

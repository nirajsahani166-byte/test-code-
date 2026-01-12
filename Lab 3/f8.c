#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m=0,x;
    printf("enter the base ");
    scanf("%d",&x);
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=m+ pow(x,i);
    }
    printf("%d",m);
       
    return 0;
}
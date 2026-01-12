#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=m+ pow(i,2);
    }
    printf("%d",m);
       
    return 0;
}
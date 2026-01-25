#include<stdio.h>
int main()
{
    int a[200],n,i,rev=0,r;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
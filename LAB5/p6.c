#include<stdio.h>
int main()
{
    int a[19],i,r;
    printf("Enter the numbers");
    for(i=0;i<=19;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=19;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
#include<stdio.h>
int main()
{
    int n, i,c=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if (c==n)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect number");
    }
    return 0;
}
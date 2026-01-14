#include<stdio.h>
int main()
{
    int n, i,c=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if (c==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0;
}
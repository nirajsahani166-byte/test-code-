#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial is %d",fact);
    return 0;
}
/*program to find the factorial of user given number using for loop.*/
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nthe factorial of %d is %d",n,fact);
    return 0;
}
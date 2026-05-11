/*program to check the user-given number is prime or not.*/
#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==1)
    {
        printf("%d is prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
    return 0;
}
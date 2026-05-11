/*program to find the factorial of user-given number using recursion.*/
#include<stdio.h>
int fact(int n);
int main()
{
    int trm,f;
    printf("enter the number of term");
    scanf("%d",&trm);
    f=fact(trm);
    printf("\n factorial of the given number is %d",f);
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
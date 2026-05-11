/*program to find the term of the fibonacci series using recursive function.*/
#include<stdio.h>
int fibo(int n);
int main()
{
    int trm,f;
    printf("enter the number of term");
    scanf("%d",&trm);
    f=fibo(trm);
    printf("the term is %d",f);
    return 0;    
}
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return (fibo(n-1)+fibo(n-2));
    }
}
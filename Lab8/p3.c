/*program to find the term of the fibonacci series using recursive function*/
#include<stdio.h>
int fibo(int f);
int main()
{
    int trm,f,i;
    printf("enter the number of terms");
    scanf("%d",&trm);
    for(i=1;i<=trm;i++)
    {
      f=fibo(i);
      printf("%d \t",f);
    }
    
    
    return 0;
}
int fibo(int f)
{
    if(f==1)
    {
        return 0;
    }
    else if (f==2)
    {
        return 1;
    }
    else
    {
        return (fibo(f-1)+fibo(f-2));
    }
}
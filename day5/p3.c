#include<stdio.h>
#include<string.h>
int fibo(int n);
int prime(int a);
int main()
{
    int n1,f,p;
    char p1[10];
    printf("Enter the value of n or the nth term");
    scanf("%d",&n1);
    f=fibo(n1);
    p=prime(f);
    if (p==1)
    {
      strcpy(p1,"prime");
    printf("The %d term of fibonacci series is %d\n which is %s",n1,f,p1);
    }
    else
    {
      strcpy(p1,"not prime");
    printf("The %d term of fibonacci series is %d\n which is %s",n1,f,p1);
    }
    return 0;
}
int fibo(int n)
{
    int t1=0,t2=1,nxt,i,t;
    for(i=0;i<n;i++)
    {   
        
        printf("%d\t",t1);
        t=t1;
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }
    return t;
}
int prime(int a)
{
    int i,a1;
    if(a<2)
    {
        return 0;
    }
    else
    {
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            a1=0;
        }
    }
    return a1;
    }
}
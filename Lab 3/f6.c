#include<stdio.h>
int main()
{
    int i,n,m;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
     printf("%dx%d=%d\n",n,i,m);
    }
       
    return 0;
}
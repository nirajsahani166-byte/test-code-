#include<stdio.h>
int main()
{
    int n, i,t1=0,t2=1,nxt,s=0;
    printf("enter the term");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    printf("%d\n",t1);
    s=s+t1;
    nxt=t1+t2;
    t1=t2;
    t2=nxt;
    }
    printf("sum of series is %d",s);
    return 0;
}
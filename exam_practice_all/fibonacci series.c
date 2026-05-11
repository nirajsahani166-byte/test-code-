/*program to find the sum of the series like 0,1,1,2,3,5,8,13,......... */
#include<stdio.h>
int main()
{
    int t1=0,t2=1,n,sum=0,i,next;
    printf("enter the number of the terms");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",t1);
        sum=sum+t1;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    printf("the sum of the series upto %d is %d",n,sum);
    return 0;
}
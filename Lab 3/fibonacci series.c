#include<stdio.h>
#include<math.h>
int main()
{
    int n, t1=1,t2=1,nxt,s=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { 
        s=s+t1;
        printf( "%d\n",t1);
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }
    printf("Sum of series is %d",s);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,t1=0,s=0;
    printf("enter the term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    t1=pow(i,3);
    if(t1<500)
    {
    printf("%d\n",t1);
    s=s+t1;
    }
  }
    printf("sum of series is %d",s);
    return 0;
}
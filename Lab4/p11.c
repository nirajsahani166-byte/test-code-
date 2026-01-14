#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,fact=1,j,x,t1;
  int s=0;
    printf("Enter a term ");
  scanf("%d",&n);
  printf("enter the value of x");
  scanf("%d",&x);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
        fact=fact*j;
    }
    t1=pow(x,i)/fact;
    s=s+t1;
  }
  printf("sum of series is %d",s);
  return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,fact=1,j;
  int s=0;
    printf("Enter a term ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
        fact=fact*j;
    }
    s=s+fact;
  }
  printf("sum of series is %d",s);
  return 0;
}
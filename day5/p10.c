#include<stdio.h>
int hcf(int num1,int num2);
int main()
{
    int n1,n2,h;
    printf("enter two num");
    scanf("%d%d",&n1,&n2);
    h=hcf(n1,n2);
    printf("the Hcf of %d and %d number is %d",n1,n2,h)
    return 0;
}
int fibo(int n)
{
  int r;
  r=n1%n2;
  if(r==0);
  {
    return n2;
  }
  else
  {
    return(hcf(n2,r));
  }
}
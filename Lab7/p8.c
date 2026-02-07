/*program to find the sum of series using user-define function
 x+x^2+x^3+x^4+....+x^n*/
#include<stdio.h>
#include<math.h>
int sum(int p,int l);
int main()
{
    int n,s,x;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the number of terms");
    scanf("%d",&n);
    s=sum(x,n);
    printf("the sum of the series is %d",s);
    return 0;
}
int sum(int p,int l)
{
    int i,j,k=0;
    for(i=1;i<=l;i++)
    {
         k=k+pow(p,i);
    }
return k;
}
/*program to find the sum of the series x + x^2 +x^3 +..........+n-terms
using recursion*/
#include<stdio.h>
#include<math.h>
int sum(int x, int n);
int main()
{
    int trm,x1,s,i;
    printf("enter the value of x\n");
    scanf("%d",&x1);
    printf("enter the number of terms\n");
    scanf("%d",&trm);
    s=sum(x1,trm);
    printf("\nThe sum of the %d term of the series is %d ",trm,s);
    
    
    return 0;
}
int sum(int x, int n)
{
    if(n==1)
    {
        return (x);
    }
    else
    {
        return (pow(x,n)+sum(x,n-1));
    }

}
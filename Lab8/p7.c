/*program to find the sum of the series 1^2 +2^2+......+n^2 
using recursive series*/
#include<stdio.h>
#include<math.h>
int sum(int n);
int main()
{
    int trm,s=0;
    printf("enter the number of terms\n");
    scanf("%d",&trm);
    s=sum(trm);
    printf("\nThe sum of the %d term of the series is %d ",trm,s);
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return (pow(n,2)+sum(n-1));
    }

}
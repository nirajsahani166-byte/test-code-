/*Program to calcutate the sum of the series upto n term 1!+2!+3!+4!+......*/
#include<stdio.h>
int main()
{
    int n,i,k,s=0,j;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            k=k*j; 
        }
     s=s+k;
    }
    printf("the sum of the series upto %d term is %d",n,s);
    return 0;
}
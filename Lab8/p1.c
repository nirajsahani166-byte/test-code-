/*program to find the sum of n-natural num using recursive function*/
#include<stdio.h>
int sum(int n1);
int main()
{
    int trm,s=0;
    printf("enter the number of terms");
    scanf("%d",&trm);
    s=sum(trm);
    printf("The sum of %d natural number is %d",trm,s);
    return 0;
}
int sum(int n1)
{
    if (n1==1)
    {
        return 1;
    }
    else
    {
       return (n1+sum(n1-1));
    }
}
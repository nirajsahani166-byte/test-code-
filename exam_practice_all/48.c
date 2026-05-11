/*Program to find the sum and display the sum of following patter 1 11 111 1111 11111......*/
#include<stdio.h>
int main()
{
    int i,n,t,s=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t=i*10+1;
        s=s+t;
    }
    printf("The sum of the series is upto %d terms is %d",n,s);
    return 0;
}

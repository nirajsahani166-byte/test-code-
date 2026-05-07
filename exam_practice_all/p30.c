/*program to check the user-given number is perfect or not.*/
#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("enter the number");
    scanf("%d",&n);\
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+i;
        }
    }
    if (c==n)
    {
        printf("%d is perfect number",n);
    }
    else
    {
        printf("%d is not perfect number",n);
    }
    return 0;
}
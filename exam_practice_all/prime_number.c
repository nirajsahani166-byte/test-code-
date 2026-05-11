/*program to check whether the user given number is prime or not.*/
#include<stdio.h>
int main()
{
    int i,num,c=0;
    printf("enter a number");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            c=c+1;
        }
    }
    if(c==1)
    {
        printf("%d is prime",num);
    }
    else
    {
        printf("%d  isnot prime",num);
    }
    return 0;
}
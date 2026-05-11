/*Program to find the HCF of two number by user-define function*/
#include<stdio.h>
int HCF(int n1,int n2);
int main()
{
    int num1,num2,h;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    h=HCF(num1,num2);
    printf("The HCF of %d and %d is %d",num1,num2,h);
    return 0;
}
int HCF(int n1,int n2)
{
    int i,h1=0;
    for(i=2;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            h1=i;
        }
    }
    return (h1);
}
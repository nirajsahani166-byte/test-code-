/*Program to find the hcf of user-given numeber using recursive function.*/
#include<stdio.h>
int hcf(int n1,int n2);
int main()
{
    int num1,num2,h;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    h=hcf(num1,num2);
    printf("the hcf is %d",h);
    return 0;
}
int hcf(int n1,int n2)
{
    int r;
    r=n1%n2;
    if(r==0)
    {
        return n2;
    }
    else
    {
        return(hcf(n2,r));
    }
}
/*program to find the hcf of user given number using recursive function*/
#include<stdio.h>
int hcf(int n1,int n2);
int main()
{
    int num1,num2,h;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    h=hcf(num1,num2);
    printf("The HCF of %d and %d is %d",num1,num2,h);
    
    
    return 0;
}
int hcf(int n1, int n2)
{
    int r;
    r=n1%n2;
    if(r==0)
    {
        return (n2);
    }
    else
    {
        return (hcf(n2,r));
    }

}
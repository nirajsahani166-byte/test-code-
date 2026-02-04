/*program to calculate the hcf of a user-define
 function using a user-define function*/
#include<stdio.h>
int hcf(int num1,int num2);
int main()
{
    int h1, num1,num2;
    printf("enter the two number numbers");
    scanf("%d%d",&num1,&num2);
    h1=hcf(num1,num2);
    printf("the hcf is %d ", h1);
    return 0;
}
int hcf(int num1,int num2)
{
    int i,f=0;
    for(i=1;i<num1&&i<num2;i++)
    {
        if ((num1%i==0&&num2%i==0))
        {
            f=i;
        }
    }
    return f;
}
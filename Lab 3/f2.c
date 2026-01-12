#include<stdio.h>
int main()
{
    int num1,num2, cond;
    float result;
    printf("enter the number");
    scanf("%d%d",&num1,&num2);
    printf("enter the case");
    scanf("%d",&cond);
    switch (cond)
    {
        case 1:
        result=num1+num2;
        printf("sum of number is %f",result);
        break;
        case 2:
        result =num1-num2;
        printf("difference of number is %f",result);
        break;
        case 3:
        result = num1*num2;
        printf("product of number is %f",result);
        break;
        case 4:
        result = num1/num2;
        printf("division of number is %f",result);
        break;
        default:
        printf("enter valid case from 1-4");
        break;
    
    }
    return 0;
}
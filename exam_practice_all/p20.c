/*program to scan two number and perform following task using switch-case statement*/
#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2;
    int cond;
    printf("Enter two number");
    scanf("%f%f",&num1,&num2);
    printf("Enter the operation number");
    scanf("%d",&cond);
    switch(cond)
    {
        case 1:
        printf("sum of %f and %f is %f",num1,num2,num1+num2);
        break;
        case 2:
        printf("difference of %f and %f is %f",num1,num2,num1-num2);
        break;
        case 3:
        printf("product of %f and %f is %f",num1,num2,num1*num2);
        break;
        case 4:
        printf("division of %f and %f is %f",num1,num2,num1/num2);
        break;
        default:
        printf("please enter valid operation number 1-4");
        break;
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int num, cond;
    float result;
    printf("enter the number");
    scanf("%d",&num);
    printf("enter the case");
    scanf("%d",&cond);
    switch (cond)
    {
        case 1:
        result =pow(num,2);
        printf("square of number is %f",result);
        break;
        case 2:
        result =pow(num,1/2);
        printf("square root of number is %f",result);
        break;
        case 3:
        result = pow(num,3);
        printf("cube of number is %f",result);
        break;
        case 4:
        result = pow(num,1/3);
        printf("cube root of number is %f",result);
        break;
        case 5:
        result= pow(num,4);
        printf("fourth power of the number is %f",result);
        break;
        default:
        printf("enter valid case from 1-5");
        break;
    
    }
    return 0;
}
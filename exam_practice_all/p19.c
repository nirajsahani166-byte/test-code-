/*program to scan a number 'n' and perform following task using switch-case satement*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,cond;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Enter the operation number");
    scanf("%d",&cond);
    switch(cond)
    {
        case 1:
        printf("the square of %d is %d",num,num*num);
        break;
        case 2:
        printf("the squareroot of %d is %d",num,pow(num,1/2));
        break;
        case 3:
        printf("the cube of %d is %d",num,pow(num,3));
        break;
        case 4:
        printf("the cuberoot of %d is %d ",num,pow(num,1/3));
        break;
        case 5:
        printf("the fourht cube of %d is %d",num,pow(num,4));
        break;
        default:
        printf("please input the valid number for operation 1-5");
        break;
    }
    return 0;
}
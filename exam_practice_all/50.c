/*program to swap two numbers using pass by reference.*/
#include<stdio.h>
void Swap1(int *n1,int *n2);
int main()
{
    int num1,num2;
    printf("enter two number");
    scanf("%d%d",&num1,&num2);
    printf("\n The numbers before swap first is %d and second is %d.",num1,num2);
    Swap1(&num1,&num2);
    printf("\n the number after swap first is %d and second is %d",num1,num2);
    return 0;
}
void Swap1(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
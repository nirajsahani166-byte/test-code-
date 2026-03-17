/*program to swap two data using the concept of funtion and pointer*/
#include<stdio.h>
void Swap(int *num1,int *num2);
int main()
{
    int n1,n2;
    printf("Enter two numbers");
    scanf("%d%d",&n1,&n2);
    printf("Number before swaping first=%d and second=%d \n",n1,n2);
    Swap(&n1,&n2);
    printf("Number after swaping first=%d and second=%d ",n1,n2);
    return 0;
}
void Swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
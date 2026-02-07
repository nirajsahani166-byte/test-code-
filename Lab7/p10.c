/*program to swap two user given integer number by using pass by reference*/
#include<stdio.h>
void swap(int *num1,int *num2);
int main()
{
    int n1,n2;
    printf("enter the first number");
    scanf("%d",&n1);
    printf("enter the second number");
    scanf("%d",&n2);
    printf("numbers before swaping the first is %d\n and the second number is %d\n ",n1,n2);
    swap(&n1,&n2);
    printf(" numbers after swaping the first is %d\n and the second number is %d\n ",n1,n2);
    return 0;
}
void swap(int *num1,int *num2)
{
  int temp;
  temp=*num1;
  *num1=*num2;
  *num2=temp;
}
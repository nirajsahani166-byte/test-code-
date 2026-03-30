#include<stdio.h>
void swap(int a, int b);
void swap1(int *a,int *b);
int main()
{
    int n,n1;
    printf("Enter the two numbers");
    scanf("%d%d",&n,&n1);
    printf("the number before using swap function first=%d and second=%d \n",n,n1);
    swap(n,n1);
   return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the number after using swap function first=%d and second=%d \n",a,b);
 
}

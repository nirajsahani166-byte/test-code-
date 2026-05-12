/*Program to illustrate the concept of passing array to function.*/
#include<stdio.h>
void display(int a[100],int n);
int main()
{
    int A[100],n1,i;
    printf("enter the value of n");
    scanf("%d",&n1);
    printf("enter the elements of the array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    display(A,n1);
    return 0;
}
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
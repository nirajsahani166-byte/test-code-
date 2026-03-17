/*program to illustrate the concept of passing array to function*/
#include<stdio.h>
void display(int a[100],int n);
int main()
{
    int A[100],n1,i;
    printf("Enter the value of n1 \n");
    scanf("%d",&n1);
    printf("Enter %d elements in an array\n",n1);
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
    printf("The elements of array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
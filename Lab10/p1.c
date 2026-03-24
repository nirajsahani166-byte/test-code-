/*WAP to scan 10 number in an array. pass it to function and sort the 
Elements of array in ascending order and 
display the sorted details in main function*/
#include<stdio.h>
void sort(int *a);
int main()
{
    int A[10],i;
    printf("Enter the 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    sort(A);
    printf("The sorted elements in ascending order is \n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
void sort(int *a)
{
    int temp,i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
/*Program to scan 10 number in an array pass it to function and sort the elements of array in ascending order and display the sorted details in main function.*/
#include<stdio.h>
void sort(int *a);
int main()
{
    int a[10],i;
    printf("enter the elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    printf("the sorted elements in ascending order:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
void sort(int *a)
{
    int i,j,sort;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                sort=a[i];
                a[i]=a[j];
                a[j]=sort;
            }
        }
    }
}
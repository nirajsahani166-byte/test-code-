/*program to scan 'n' number in an array and find the minimum element among the element of array.*/
#include<stdio.h>
int main()
{
    int a[200],n,min,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d\n",a[i]);
    }
    printf("\n %d is the smallest",min);
    return 0;
}
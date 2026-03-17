/*program to scan 10 number in an array and sort the elements of array and display
the sorted array using the concept of array and pointer*/
#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter the elements of array");
    for(i=0;i<10;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    printf("The sorted array in ascending order is \n");
    for(i=0;i<10;i++)
    {
        printf("%d \t",*(a+i));
    }
    return 0;
}
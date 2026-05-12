/*program to scan 10 numbers in an array and sort the elements of array and display the sorted array using the concept of array and pointer.*/
#include<stdio.h>
int main()
{
    int a[10],i,j,sort;
    printf("enter 10 numbers");
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
                sort=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=sort;
            }
        }
    }
    printf("\nthe sorted array in ascending order:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",(a+i));
    }
    return 0;
}
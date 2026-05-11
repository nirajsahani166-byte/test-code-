/*Program to scan the matrix of order 2*3 and sum them and find the summation of matrix.*/
#include<stdio.h>
int main()
{
    int a[2][3],i,j,sum=0;
    printf("enter the elements of matrix.");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("the entered matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of the matrix is %d",sum);
    return 0;
}
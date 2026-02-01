/* program to scan a matrix of order 4x4 and find maximum element among the elements of matrix and 
substitute that maximum value elements in main diagonal elements and display new matrix */
#include<stdio.h>
int main()
{
    int a[4][4],i,j,max=0;
    printf("enter the elements of matrix");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=max+a[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
             a[i][j]=max;
            }
        }
    }
    printf("the new matrix is \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     return 0;
}
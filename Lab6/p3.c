//program to scan the matrix of order 2*3 and sum them and display the summation matrix //
#include<stdio.h>
int main()
{
    int a[2][3],i,j,sum=0;
    printf("enter the elements of matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("the matrix is %d\n",sum);
     return 0;
}
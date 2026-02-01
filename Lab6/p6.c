/* program to scan a matrix of order rxc and find the sum of individual row and
 individual column and display it */
#include<stdio.h>
int main()
{
    int r,c,m[10][10],t[10][10],i,j,rsum=0,csum=0;
    printf("enter the order of matrix row and column");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("the matrix is\t \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d \t",m[i][j]);
        }
        printf("\n");
    }
    printf("calculating the sum of row\n");
   for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
        {
            rsum=rsum+m[i][j];
        }
        printf("\n");
        printf("the sum of row is %d\n",rsum);
    }
    
    printf("calculating the sum of column is \n");
    for(i=0;i<c;i++)
    {
        csum=0;
        for(j=0;j<r;j++)
        {
            csum=csum+m[j][i];
        }
        printf("\n");
        printf(" the sum of column %d",csum);
    }
     return 0;
}
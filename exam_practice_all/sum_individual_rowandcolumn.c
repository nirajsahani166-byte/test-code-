/*program to scanf a matrix of order r*c and find the sum of individual row and individual column and display it.*/
#include<stdio.h>
int main()
{
    int r,c,i,j,a[10][10],rsum,csum;
    printf("Enter the value of row and column");
    scanf("%d%d",&r,&c);
    printf("enter the elements of the matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the entered matrix is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\ncalculating the individual sum of the row");
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
        {
            rsum=rsum+a[i][j];
        }
        printf("\nthe sum of row is %d",rsum);
    }
    printf("\n calculating the individual sum of the column");
    for(i=0;i<c;i++)
    {
        csum=0;
        for(j=0;j<r;j++)
        {
            csum=csum+a[j][i];
        }
        printf("\nthe of  column is %d ",csum);
    }
    return 0;
}
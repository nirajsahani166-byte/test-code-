// multiplication of two matrix
#include<stdio.h>
int main()
{
    int i,j,m[10][10],r1,r2,c2,c1,m1[10][10],m2[10][10];
    printf("enter the order of matrix r and c \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements of first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter the order of matrix r and c \n");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements of second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("\n");
    if (c1==r2)
    {
        printf("the multiplication matrix is \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
        m[i][j]=m1[i][j]*m2[i][j];
        printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
    else
    {
        printf("please enter multiplacable matrix order");
    }
    return 0;
}
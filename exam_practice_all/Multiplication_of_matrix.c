/*program to find the multiple of two matrix if possible.*/
#include<stdio.h>
int main()
{
    int m1[10][10],m2[10][10],m[10][10],i,j,k,r1,c1,r2,c2;
    printf("enter the value of r1 and c1.");
    scanf("%d%d",&r1,&c1);
    printf("\nenter the elements of first matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nenter the value of r2 and c2.");
    scanf("%d%d",&r2,&c2);
    printf("\n enter the elements of second matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    if(c1==r2)
    {
        printf("\nthe multiplication of the given matrix is possible");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    m[i][j]=m1[i][k]*m2[k][j];
                }
            }
        }
        printf("\n the multiplication matrix is: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",m[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n the multiplication of the given matrix is not possible");
    }
    return 0;
}
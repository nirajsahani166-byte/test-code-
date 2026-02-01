/* program to scan two matrix of order r1xc1 and r2xc2 and 
multiply them if possile and display multiplied matrix */
#include<stdio.h>
#define N 50
int main()
{
    int r1,r2,c1,c2,m1[N][N],m2[N][N],m[N][N],i,j,sum,k;
    printf("enter the order of first matrix \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements of matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter the order of second matrix");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements of second matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }
    if(c1==r2)
    {
        printf("the multiplication matrix \n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
               sum=sum+m1[i][k]*m2[k][j];
            }
            printf("%d\t",sum);
           
        }
        printf("\n");
    }
    }
    else
    {
        printf("please enter valid matrix");
    }
    return 0;
}
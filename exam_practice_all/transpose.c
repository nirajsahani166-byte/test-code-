/*program to find the transpose of the given matrix of order r and c.*/
#include<stdio.h>
int main()
{
    int r,c,a[10][10],t[10][10],i,j;
    printf("enter the value of r and c");
    scanf("%d%d",&r,&c);
    printf("enter the elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the enter matrix before transpose .\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of given matrix is .\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
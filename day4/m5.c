//to find transpose of matrix
#include<stdio.h>
int main()
{
    int i,j,t[10][10],m[10][10],r,c;
    printf("enter the order of matrix r and c \n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of  matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    
    printf("matrix before transpose\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("matrix after transpose\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=m[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
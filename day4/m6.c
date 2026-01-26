#include<stdio.h>
int main()
{
    int i,j,max,m[10][10],r,c;
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
    max=m[0][0];
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(max<m[i][j])
            {
               max=m[i][j];
            }
        
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("%d is the maximum element ", max);
    return 0;
}
//sum of main diagonal elements
#include<stdio.h>
int main()
{
    int i,j,sum=0,m[10][10],r,c;
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
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
              sum=sum+m[i][j];
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
    printf("%d is the sum of main diagonal element ", sum);
    return 0;
}
// diagonal element is subtituted by minium elements
#include<stdio.h>
int main()
{
    int i,j,min,m[10][10],r,c;
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
    min=m[0][0];
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(min>m[i][j])
            {
              min=m[i][j];
            }
        
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                m[i][j]=min;
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
    printf("%d is the minimum element ", min);
    return 0;
}
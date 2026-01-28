#include<stdio.h>
int main()
{
    int a[4][4],i,j,max=0;
    printf("enter the elements of matrix");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=max+a[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
             a[i][j]=max;
            }
        }
    }
    printf("the new matrix is \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     return 0;
}
/*program to find the maximum element and substitute it in the diagonal.*/
#include<stdio.h>
int main()
{
    int a[10][10],max,r,c,i,j;
    printf("enter the value of row and column");
    scanf("%d%d",&r,&c);
    printf("enter the elements of the matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    printf("\n the entered matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                a[i][j]=max;
                
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
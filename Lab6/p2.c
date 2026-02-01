// program to scan the matric of order r*c and display it //
#include<stdio.h>
int main()
{
    int r,c,a[10][10],i,j;
    printf("enter the order of matrix row and column");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is \n");
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     return 0;
}
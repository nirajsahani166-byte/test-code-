#include<stdio.h>
int main()
{
    int i,j,m[10][10],r,c;
    printf("enter the matrix of order r&c\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("Matrix in order %dx%d\n",r,c);
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d\t",m[i][j]);
      }
      printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,m[2][3];
    printf("enter the matrix of order 2x3\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("Matrix in order 2x3\n");
    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      {
        printf("%d\t",m[i][j]);
      }
      printf("\n");
    }
    return 0;
}
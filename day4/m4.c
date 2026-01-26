#include<stdio.h>
int main()
{
    int i,j,m1[2][3],m2[2][3],m[2][3];
    printf("enter the elements of  first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("enter the elements of second matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Adding m1 and m2\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("sum matrix is \n");
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
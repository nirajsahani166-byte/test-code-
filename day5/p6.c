#include<stdio.h>
int main()
{
    int p,q,i,j,m[10][10],max=0;
    printf("Enter the rows of the matrix\n");
    scanf("%d",&p);
    printf("Enter the column of the matirx\n");
    scanf("%d",&q);
    printf("Enter the elements of matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("The entered matrix is \n\n\n");
   for(i=0;i<p;i++)
   {
    for(j=0;j<q;j++)
    {
        printf("%d\t",m[i][j]);
    }
    printf("\n");
   }
   for(i=0;i<p;i++)
   {
    max=m[i][0];
    for(j=1;j<q;j++)
    {
      if(max<m[i][j])
      {
        max=m[i][j];
      }  
      
    }
    printf("\n\n%d row has highest element %d",i+1,max);
   }
   return 0;
}

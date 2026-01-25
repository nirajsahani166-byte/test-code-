#include<stdio.h>
int main()
{
    int a[200],n,i,j,sort;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sorting in ascending order\n");
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
        if(a[i]>a[j])
        {
        sort=a[i];
        a[i]=a[j];
        a[j]=sort;
        }
       }

    }
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    
    return 0;
}
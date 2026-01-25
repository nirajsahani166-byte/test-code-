#include<stdio.h>
int main()
{
    int a[200],n,i,min,r;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
         min=a[i];
        }
        
    }
    printf("%d is minimum",min);
    return 0;

}
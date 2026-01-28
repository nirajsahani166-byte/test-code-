#include<stdio.h>
int main()
{
    int sort,n,a[200],i,j;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
           sort=a[i];
           a[i]=a[j];
           a[j]=sort;
        }
    }
}
printf("the decending order is\n");
for(i=0;i<n;i++)
{
    printf(" %d\n",a[i]);
}
printf("the second largest is %d\n and third largest is %d",a[1],a[2]);
return 0;
}
#include<stdio.h>
int main()
{
int a[5],i,s=0;
printf("enter five numbers");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
    
}
for(i=0;i<5;i++)
{
    printf("%d\t",a[i]);
    s=s+a[i];
}
printf("\n%d is sum",s);
return 0;
}
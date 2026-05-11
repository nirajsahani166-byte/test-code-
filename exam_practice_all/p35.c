/*program to scan 20 number in an array and display it in reverse order*/
#include<stdio.h>
int main()
{
    int a[20],i;
    printf("enter 20 number");
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n in reverse order");
    for(i=20;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
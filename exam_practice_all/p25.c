/*program to print multiplication table of user given number*/
#include<stdio.h>
int main()
{
    int n,m,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("\n%d x %d =%d",n,i,m);
    }
    return 0;
}
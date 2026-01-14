#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the number");
    scanf("%d",&n);
    int i=1;
    do
    {
        m=n*i;
printf("%d x %d =%d\n",n,i,m);
        i++;
    }
    while(i<=10);
    
    return 0;
}
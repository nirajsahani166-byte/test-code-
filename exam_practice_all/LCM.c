/*program to find the lcm of two number*/
#include<stdio.h>
int main()
{
    int n1,n2,l=0,i;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    for(i=2;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            l=i;
            break;
        }
    }

    printf("The lcm is %d",l);
    return 0;
}
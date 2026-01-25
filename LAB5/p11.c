#include<stdio.h>
int main()
{
    int n1,n2,i,HCF;
    printf("enter the two numbers");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            HCF=i;
        }
    }
    printf("the HCF is %d",HCF);
    return 0;
}

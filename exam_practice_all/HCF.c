/*program to calculate the HCF of two user given integer number.*/
#include<stdio.h>
int main()
{
    int h,n1,n2,i;
    printf("enter two number");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            h=i;
        }
    }
    printf("\n the hcf is %d",h);
    return 0;
}
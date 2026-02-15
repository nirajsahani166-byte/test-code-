/*program to check whether a user given 'n' digit no is armstrong 
or not using function*/
#include<stdio.h>
#include<math.h>
int arm(int n);
int main()
{
    int num,cond;
    printf("enter the number");
    scanf("%d",&num);
    cond=arm(num);
    if(num==cond)
    {
        printf("%d is armstrom",num);
    }
    else
    {
        printf("%d is not armstrom",num);
    }
    return 0;
}
int arm(int n)
{
    int k=0,l,r,i,j,a;
    r=n;
    l=log10(n)+1;
    for(i=1;i<=l;i++)
    {
            a=r%10;
            r=r/10;

        k=k+pow(a,l);
    }
    return k;
}

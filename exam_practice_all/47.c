/*program to check whether a user given 'n' digit no is armstrong or not using function.*/
#include<stdio.h>
#include<math.h>
int arm(int n);
int main()
{
    int num,cond,A1;
    printf("enter a number");
    scanf("%d",&num);
    cond=num;
    A1= arm(num);
    if(cond==A1)
    {
        printf("%d is palindrome",num);
    }
    else
    {
        printf("%d is not palindrome",arm);
    }
    return 0;
}
int arm(int n)
{
    int l,r,i,k=0,a=0;
    k=n;
    l=log10(n)+1;
    for(i=0;i<l;i++)
    {
        r=n%10;
        a=a+pow(r,l);
        n=n/10;
    }
    return a;
}
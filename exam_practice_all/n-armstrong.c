/*program to check the whether user given number is armstrong or not.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,l,arm=0,r,n,cond;
    printf("enter a numebr");
    scanf("%d",&n);
    cond=n;
    l=log10(n)+1;
    for(i=1;i<=l;i++)
    {
        r=n%10;
        n=n/10;
        arm=arm+pow(r,l);
    }
    if(cond==arm)
    {
        printf("%d is armstrong",cond);
    }
    else
    {
        printf("%d is not armstrong",cond);
    }
    return 0;
}
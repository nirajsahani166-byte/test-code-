/*program to check the user-given number is armstrong or not.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int l,r,arm=0,cond,num,i;
    printf("Enter a number");
    scanf("%d",&num);
    cond=num;
    l=log10(num)+1;
    for(i=0;i<l;i++)
    {
        r=num%10;
        num=num/10;
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
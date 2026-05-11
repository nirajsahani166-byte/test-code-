/*program to check whether user given number is palindrome or not*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,rev=0,r,i,num;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    l=log10(n)+1;
    for(i=1;i<=l;i++)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(num==rev)
    {
        printf("%d is palindrome",num);
    }
    else
    {
        printf("%d is not palindrome",num);
    }
    return 0;
}
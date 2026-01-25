#include<stdio.h>
#include<math.h>
int main()
{
    int k,n,rev=0,r,l,i;
    printf("Enter the numbers");
    scanf("%d",&n);
l=log10(n)+1;
k=n;
for(i=1;i<=l;i++)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
if(k==rev)
{
    printf("Palindrome");
}
else
{
    printf("not palindrome");
}
return 0;
}
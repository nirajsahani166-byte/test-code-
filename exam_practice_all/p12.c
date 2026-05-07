/*program to check the user given number is palindrom or not.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,r,l,rev=0,cond;
    printf("enter a number");
    scanf("%d",&num);
    l=log10(num)+1;
    cond=num;
    for(i=0;i<l;i++)
    {
        r=num%10;
        num=num/10;
        rev=rev*10+r;
    }
    if(cond==rev)
    {
        printf("%d is palindrom",rev);
    }
    else
    {
        printf("%d isnot palindrom",rev);
    }
    return 0;
}
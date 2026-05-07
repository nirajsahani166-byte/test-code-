/*program to check greatest among 3-numbers using the concept of nested if else ladder.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)  
        {
            printf("%d is the greatest",a);
        }
        else
        {
            printf("%d is the greatest",c);
        }
        
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is the greatest",b);
        }
        else
        {
            printf("%d is the greatest",c);
        }
    }
    else
    {
        if(a==c)
        {
           printf("all numbers are equal");
        }
        else if(a>c) 
        {
            printf("%d is the greatest",a);   
        }
        else
        {
            printf("%d is the greatest",c);
        }
    }
    return 0;
}
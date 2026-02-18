/*program to find the factorial of user-given number using recursive function*/
#include<stdio.h>
int fact(int f);
int main()
{
    int trm,f;
    printf("enter the number of terms");
    scanf("%d",&trm);
    f=fact(trm);
    printf("The factorial is %d is %d",trm,f);
    return 0;
}
int fact(int f)
{
    if(f==1)
    {
        return 1;
    }
    else if (f==0)
    {
        return 1;
    }
    else
    {
        return (f*fact(f-1));
    }
}
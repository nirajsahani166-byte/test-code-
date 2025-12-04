#include <stdio.h>

int main() 
{
int a,b;
printf("enter any two number");
scanf("%d%d",&a,&b);
if(a<b)
{
    printf("%d is greater \n%d is smaller",b,a);
}
else if(a>b)
{
    printf("%d is greater \n%d is smaller",a,b);
}
else
{
    printf("%d is equal to %d",a,b);
}
    return 0;
}

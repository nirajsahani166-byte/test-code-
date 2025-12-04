#include<stdio.h>
int main()
{
int a,b;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
if(a>b&&b<a)
{
    printf("%d is greater \n%d is smaller",a,b);
}
else if(b>a&&a<b)
{
    printf("%d is greater \n%d is smaller",b,a );
}
else if(a==b)
{
    printf("%d is equal numbers",a);
}
else
{
    printf("program is invalid");
}
return 0;
}

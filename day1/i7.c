#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,A;
    printf("enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle =%d",A);
    return 0;
}
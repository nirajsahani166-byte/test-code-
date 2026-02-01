/*program to calculate the area and perimeter of scalen triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,A,p;
    printf("enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    p=a+b+c;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle =%d\n primeter is %d",A,p);
    return 0;
}
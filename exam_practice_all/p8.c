/*program to calculate the area and perimeter of a scalen triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s=0,A,P;
    printf("Enter the sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    P=a+b+c;
    A=pow(s*(s-a)*(s-b)*(s-c),1/2);
    printf("Area is %d and perimeter is %d",A,P);
    return 0;
}
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float r,a;
    printf("enter radius of circle");
    scanf("%f",&r);
    a=pi*r*r;
    printf("area of circle =%f",a);
    return 0;
}
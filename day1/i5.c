#include <stdio.h>
#define pi 3.14
int main()
{
    float t,c,v,r,h;
    printf("enter radius and height of cylinder");
    scanf("%f%f",&r,&h);
    t=2*pi*r*(r+h);
    c=2*pi*r*h;
    v=pi*r*r*h;
    printf("total surface area =%f \n curved surface area =%f \n volume =%f",t,c,v);
    return 0;
}
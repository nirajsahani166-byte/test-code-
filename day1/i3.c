#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("enter the principal, time and rate");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("simple interest =%f",si);
    return 0;
}
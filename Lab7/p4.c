#include<stdio.h>
float SI(float p,float t,float r);
int main()
{
    float p1,t1,r1,si;
    printf("enter the principal,time and rate");
    scanf("%f%f%f",&p1,&t1,&r1);
    si=SI(p1,t1,r1);
    printf("the simple intrest is %f",si);
    return 0;
}
float SI(float p,float t,float r)
{
    int n;
    n=(p*t*r)/100;
    return n;
}
/*program to find the simple interest using user-define function.*/
#include<stdio.h>
float SI(float p, float t, float r);
int main()
{
    int p1,r1,t1;
    float s;
    printf("ente the principle , time and rate");
    scanf("%d%d%d",&p1,&t1,&r1);
    s=SI(p1,t1,r1);
    printf("the simple interest is %f",s);
    return 0;
}
float SI(float p, float t, float r)
{
    float I;
    I=(p*t*r)/100;
    return (I);
}
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,D;
float r1,r2;
printf("enter the value of a,b,c of ax^2+bx+c=0");
scanf("%d%d%d",&a,&b,&c);
D=pow(b,2)-4*a*c;
if(D==0)
{
    r1=(-b)/2*a;
    printf("roots are real and equal %f ",r1);
}
else if(D>0)
{
    r1=(-b+pow(D,1/2))/2*a;
    r2=(-b-pow(D,1/2))/2*a;
    printf("roots are real and unequal r1=%f\nr2=%f",r1,r2);
}
else
{
    printf("roots are imaginary");
}
return 0;
}
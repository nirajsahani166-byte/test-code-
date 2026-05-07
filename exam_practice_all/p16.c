/*Program to calculate the roots of ax^2+bx+c=0 */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r1,r2,d;
    printf("Enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(d==0)
    {
        printf("Roots are equal \n which is %d",(-b)/2*a);
    }
    else if(d<0)
    {
        r1=(-b+pow(d,1/2))/2*a;
        r2=(-b-pow(d,1/2))/2*a;
        printf("Roots are unequal \n r1=%d \n r2=%d",r1,r2);
    }
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
}
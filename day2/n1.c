#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z;
    printf("enter the coordinates ");
    scanf("%f%f",&x,&y);
    z=pow(x,1/3)+pow(y,2/3)+sqrt(x*y);
    printf("z=%f",z);
    return 0;
}
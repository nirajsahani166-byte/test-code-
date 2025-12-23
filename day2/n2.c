#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
printf("enter the values of a and b");
scanf("%f%f",&a,&b);
c=pow(a,2)+pow(b,3)+pow(a,2/3)*pow(b,1/3);
printf("c=%f",c);
return 0;
}
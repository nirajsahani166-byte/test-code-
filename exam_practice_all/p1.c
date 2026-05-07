/*Program to convert degree celcius to fahrenheit scale*/
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the celcius");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("\n The celcius %f is in fahrenheit %f",c,f);
    return 0;
}
#include<stdio.h>
int main()
{
    int I,F;
    printf("enter the length in inches");
    scanf("%d",&I);
    F=I/12;
    I=I%12;
    printf("length is %d feet and %d inches",F,I);
    return 0;
}
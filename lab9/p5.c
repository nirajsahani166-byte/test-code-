/*program to calculate simple interest using the 
concept of function and pointer*/
#include<stdio.h>
void SI(int *p,int *t,int *r,int *i);
int main()
{
    int p1,t1,r1,i1;
    printf("Enter the principle,time and rate");
    scanf("%d%d%d",&p1,&t1,&r1);
    SI(&p1,&t1,&r1,&i1);
    printf("The simple interest is %d",i1);
    return 0;
}
void SI(int *p,int *t,int *r,int *i)
{
    *i=(*p**t**t)/100;1
}
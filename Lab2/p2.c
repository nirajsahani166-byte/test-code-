#include<stdio.h>
int main()
{
int num,r1,r2,r3,rev=0;
printf("enter the 3-digit number");
scanf("%d",&num);
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
r3=num%10;
rev=r1*100+r2*10+r3;
printf("the reverse is %d",rev);
return 0;

}
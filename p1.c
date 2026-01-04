#include<stdio.h>
int main()
{
int num,r1,r2,r3,r4,sum=0;
printf("enter 4-digit number");
scanf("%d",&num);
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
r3=num%10;
r4=num/10;
sum=r1+r2+r3+r4;
printf("the sum is %d",sum);
return 0;
}
#include<stdio.h>
int main()
{
int num,r1,r2,r3,r4,rev=0,cond;
printf("enter 4-digit number");
scanf("%d",&num);
cond=num;
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
r3=num%10;
r4=num/10;
rev=r1*1000+r2*100+r3*10+r4;
if(cond==rev)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
return 0;
}
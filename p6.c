#include<stdio.h>
#include<math.h>
int main()
{
int num,r1,r2,r3,arm,cond;
printf("enter 3-digit number");
scanf("%d",&num);
cond=num;
r1=num%10;
num=num/10;
r2=num%10;
num=num/10;
r3=num;
arm=pow(r1,3)+pow(r2,3)+pow(r3,3);
if (cond==arm)
{
    printf("armstrong");
}
else
{
printf("not armstrong");
}
return 0;
}
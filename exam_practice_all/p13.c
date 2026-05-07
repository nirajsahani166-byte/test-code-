/*program to check the 3-digit number is armstrong or not.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,arm,r1,r2,r3,cond;
    printf("Enter the 3-digit number");
    scanf("%d",&num);
    cond=num;
    r1=num%10;
    num=num/10;
    r2=num%10;
    r3=num/10;
    arm=pow(r1,3)+pow(r2,3)+pow(r3,3);
    if(arm==cond)
    {
        printf("%d is armstrong",arm);
    }
    else
    {
        printf("%d is not armstrong",cond);
    }
    return 0;
}
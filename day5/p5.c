#include<stdio.h>
int main()
{
    int a[500],i,b=0,A=0,age;
    printf("Enter the age of 500 person");
    for(i=0;i<500;i++)
    {
        scanf("%d",&a[i]);
        A=A+a[i];
        if(a[i]>25&&a[i]<30)
        {
            b=b+1;
        }
    }
    age=A/500;
    printf("The avarage age is %d \nThe age between 25 to 30 ");
    return 0;
}
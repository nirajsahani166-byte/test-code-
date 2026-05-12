/*progaram to find the (x)^y using recurisive function.*/
#include<stdio.h>
int power(int x, int y);
int main()
{
    int x1,y1,p;
    printf("enter the value of x and y");
    scanf("%d%d",&x1,&y1);
    p=power(x1,y1);
    printf("\n the value is %d",p);
    return 0;
}
int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return (x*power(x,y-1));
    }
}
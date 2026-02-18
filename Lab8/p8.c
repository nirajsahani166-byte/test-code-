/*program to find (x)^y using recursive function*/
#include<stdio.h>
#include<math.h>
int power(int x, int y);
int main()
{
    int x1,y1,result;
    printf("enter the value of x and value of y");
    scanf("%d%d",&x1,&y1);
    result=power(x1,y1);
    printf("The result is %d",result);
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